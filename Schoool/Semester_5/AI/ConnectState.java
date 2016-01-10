package connect4;

import java.util.ArrayList;
import java.util.List;
import java.util.Vector;

//import klesk.math.search.StateImpl;
import sac.graph.AStar;
import sac.graph.GraphSearchAlgorithm;
import sac.graph.GraphState;
import sac.graph.GraphStateImpl;
import sac.game.GameState;
import sac.game.GameStateImpl;
import sac.game.AlphaBetaPruning;
import sac.game.GameSearchAlgorithm;
import sac.game.MinMax;
import sac.StateFunction;

public class ConnectState extends GameStateImpl{

	//symbole
	public static final byte X = 1;	//gracz
	public static final byte O = 2;	//komputer
	public static final byte _ = 0;	//plansza
	
	//plansza
	public final byte boardHeight; //ilosc wierszy
	public final byte boardWidth; //ilosc kolumn
	
	public byte board[][];
	
	//kolejność ruchu
	//false - X
	//true - O
	public boolean moveTurn = false;
	
	//konstruktory
	public ConnectState(byte boardHeight, byte boardWidth, boolean turn)
	{
		super();
		
		this.boardHeight = boardHeight;
		this.boardWidth = boardWidth;
		this.moveTurn = turn;

		board = new byte[boardHeight][boardWidth];
		for(int i=0; i<boardHeight; i++)
		{
			for(int j=0; j<boardWidth; j++)
			{
				board[i][j] = _;
			}
		}
		//computeHeuristicGrade();
	}
	
	public ConnectState(ConnectState parent)
	{
		//super();
		
		this.boardHeight = parent.boardHeight;
		this.boardWidth = parent.boardWidth;
		this.moveTurn = parent.moveTurn;
		
		board = new byte[boardHeight][boardWidth];
		
		for(int i=0; i<parent.boardHeight; i++)
			for(int j=0; j<parent.boardWidth; j++)
				board[i][j] = parent.board[i][j];
		
		computeHeuristicGrade();
	}
	
	public void setChildren(List<GameStateImpl> aChildren) {
		children = aChildren;
	}
	
	//funkcja wykonująca ruch
	public void makeMove(int column)
	{
		for(int i=boardHeight-1; i>=0; i--)
		{
			if(board[i][column]==_)
			{
				if(moveTurn == false)
					board[i][column] = X;
				else if(moveTurn == true)
					board[i][column] = O;
				
				moveTurn = !moveTurn;
				break;
			}
		}
	}
	
	//konwersja do String
	public String toString() 
	{
		String temp="|";
		
		for(int i=0; i<boardHeight; i++)
		{
			for(int j=0; j<boardWidth; j++)
			{
				if(board[i][j] == X)
					temp=temp+"X"+"|";
				else if(board[i][j] == O)
					temp=temp+"O"+"|";
				else temp=temp+"_"+"|";
				
			}
			if(i<boardHeight-1) temp+="\n|";
		}
		temp+="\n|";
		
		for(int i=0; i<boardWidth; i++)
		{
			temp+=i+"|";
		}
		temp+="\n";
		return temp;	
	}
	
	public void generateChildren(ConnectState aParent) 
	{
		List<GameStateImpl> children = new ArrayList<GameStateImpl>();
		ConnectState parent = (ConnectState) aParent;
	  
		ConnectState child;
		for (int i = 0; i < parent.boardWidth; i++)
		{
			child = new ConnectState(parent);
			child.makeMove(i);
			child.setMaximizingTurnNow(!parent.isMaximizingTurnNow());	
			child.setMoveName(""+i);	
		}  
		parent.setChildren(children);  
	}
	
	//sprawdzenie kolumn
	public Vector<Integer> checkColumn1(int playerSymbol)
	{
		Vector<Integer> ile = new Vector<Integer>();
		int counter = 0;
		byte Enemy;
		if (playerSymbol == X)
			Enemy = O;
		else
			Enemy = X;
		
		for (int j= 0; j < this.boardWidth; j++ ){
			for (int i = this.boardHeight -1; i > 2; i-- ){
				
				counter = 0;
				
				if(board[i][j] == Enemy || board[i-1][j] == Enemy || board[i-2][j] == Enemy || board[i-3][j]==Enemy)
					counter = 0;
				else{
					for (int k=0; k<4; k++)
						if (board[i-k][j] == playerSymbol)
							{counter++;}
				}
					if (counter>0)
						ile.add(counter);
			}
		}
		return ile;
	}
	//sprzawdzenie wierszy
	public Vector<Integer> checkRow1(int playerSymbol)
	{
		Vector<Integer> ile = new Vector<Integer>();
		int counter = 0;
		byte Enemy;
		if (playerSymbol == X)
			Enemy = O;
		else
			Enemy = X;
		
	        for(int i=boardHeight-1; i>1; i--){
	        	for(int j=0; j<boardWidth-3; j++){	
	        		counter=0;
	        		
	        		if(board[i][j] == Enemy || board[i][j+1] == Enemy || board[i][j+2] == Enemy || board[i][j+3]== Enemy)
	        			counter=0;
	        		else{	
	        			for (int k=0; k<4; k++){
							if (board[i][j+k] == playerSymbol)
								counter++;
						}
					}
	        		if (counter>0)
						ile.add(counter);
	        	}
	        }

		return ile;
	}
	//sprawdzenie przekatnych \
	public Vector<Integer> checkDiagR(byte playerSymbol)
	{
		Vector<Integer> ile = new Vector<Integer>();
		int counter = 0;
		byte Enemy;
		if (playerSymbol == X)
			Enemy = O;
		else
			Enemy = X;
		
		for (int i = this.boardHeight -1; i > 2; i-- ){
			for (int j = 0; j <this.boardWidth-3; j++){
				
				counter = 0;
				//[kolumna] [wiersz]
				if(board[i][j] == Enemy || board[i-1][j+1] == Enemy || board[i-2][j+2] == Enemy || board[i-3][j+3]==Enemy)
					counter = 0;
				else{
					for (int k=0; k<4; k++){
						if (board[i-k][j+k] == playerSymbol)
							counter++;
					}
				}
				if (counter>0)
					ile.add(counter);
			}
		}
		return ile;
	}
	//sprawdzenie przekatnych /
	public Vector<Integer> checkDiagL(byte playerSymbol)
	{
		Vector<Integer> ile = new Vector<Integer>();
		int counter = 0;
		byte Enemy;
		if (playerSymbol == X)
			Enemy = O;
		else
			Enemy = X;
		
		for (int i = this.boardHeight -1; i > 2; i-- ){
			for (int j = this.boardWidth-1; j >= 3; j--){
				
				counter = 0;
				
				if(board[i][j] == Enemy || board[i-1][j-1] == Enemy || board[i-2][j-2] == Enemy || board[i-3][j-3]==Enemy)
					counter = 0;
				else{
					for (int k=0; k<4; k++)
						if (board[i-k][j-k] == playerSymbol)
							counter++;
				}
				if (counter>0)
					ile.add(counter);
			}
		}
		return ile;
	}
		
	public double computeHeuristicGrade() {
		double result_max = 0, result_min = 0;
		
		//sprawdzenie sufitu
		for(int j = 0; j < boardWidth; j++){
            if(board[0][j] == O)
                return Double.POSITIVE_INFINITY;
            if(board[0][j] == X)
                return Double.NEGATIVE_INFINITY;
        }
		
		Vector<Integer> kolumny, wiersze, skosy_lewe, skosy_prawe;
		kolumny = checkColumn1(X);
		wiersze = checkRow1(X);
		skosy_lewe = checkDiagL(X);
		skosy_prawe = checkDiagR(X);
		
		for(int i=0; i<kolumny.size(); i++)
			if(kolumny.get(i) == 4)
				return Double.NEGATIVE_INFINITY;
			else
				break;
		
		for(int i=0; i<wiersze.size(); i++)
			if(wiersze.get(i) == 4)
				return Double.NEGATIVE_INFINITY;
			else
				break;
		
		for(int i=0; i<skosy_lewe.size(); i++)
			if(skosy_lewe.get(i) == 4)
				return Double.NEGATIVE_INFINITY;
			else
				break;
		
		for(int i=0; i<skosy_prawe.size(); i++)
			if(skosy_prawe.get(i) == 4)
				return Double.NEGATIVE_INFINITY;
			else
				break;
		
		kolumny = checkColumn1(O);
		wiersze = checkRow1(O);
		skosy_lewe = checkDiagL(O);
		skosy_prawe = checkDiagR(O);
		
		for(int i=0; i<kolumny.size(); i++)
			if(kolumny.get(i) == 4)
				return Double.POSITIVE_INFINITY;
			else
				break;
		
		for(int i=0; i<wiersze.size(); i++)
			if(wiersze.get(i) == 4)
				return Double.POSITIVE_INFINITY;
			else
				break;
		
		for(int i=0; i<skosy_lewe.size(); i++)
			if(skosy_lewe.get(i) == 4)
				return Double.POSITIVE_INFINITY;
			else
				break;
		
		for(int i=0; i<skosy_prawe.size(); i++)
			if(skosy_prawe.get(i) == 4)
				return Double.POSITIVE_INFINITY;
			else
				break;
		
		return result_min + result_max;
			
	}

	public String getHashCode() {
		return toString();
	}

	@Override
	public List<GameState> generateChildren() {
		// TODO Auto-generated method stub
		return null;
	}
}