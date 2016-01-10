package connect4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

//import klesk.math.search.AlphaBetaSearcher;
//import klesk.math.search.State;
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


public class ConnectSearcher extends AlphaBetaPruning/*StateFunction*/{


	public ConnectSearcher() {}
	public static void main(String[] args) throws IOException{	
		int move = 1;
		boolean firstmove=true, pc_first=true;
		
		ConnectState s = new ConnectState((byte)9, (byte)9, pc_first);
		Random r = new Random();
		
		BufferedReader inReader = new BufferedReader(new InputStreamReader(System.in), 1);
		String line = "";
	
		while (true){
		
			ConnectSearcher searcher = new ConnectSearcher();			
			
			String temp = searcher.getMovesScores().toString();
			//GameSearchAlgorithm a = new AlphaBetaPruning();
			
			temp = temp.substring(1, temp.length()-1);
			System.out.print(temp+ "\n");
			String tablicastr[] = temp.split(", ");
			
			int keyTab[] = new int[tablicastr.length];
			double valueTab[] = new double[tablicastr.length];
			
			//uzyskanie najlepszego ruchu dla komputera
			double max=Double.NEGATIVE_INFINITY;
			int counter=0;
			
			for(int i=0; i<valueTab.length; i++){
	
				if(valueTab[i]>max){	
					max = valueTab[i];
					counter=i;
				}
			}
			int value = keyTab[counter];
			System.out.print(keyTab[counter]+ "\n");
			
			//komputer wykonuje ruch
			if(firstmove==true && pc_first==true){
				move = r.nextInt(8);
				System.out.println("poz. startowa: "+move);
				s.makeMove(move);
				firstmove=false;
			}
			else
				s.makeMove(value);
//----------			
			//sprawdz czy komputer wygral
			if(s.computeHeuristicGrade() == Double.NEGATIVE_INFINITY){
				System.out.println("\n nwygrany: gracz\n");
				System.out.println(s.toString());
				break;
			}
			else if(s.computeHeuristicGrade() == Double.POSITIVE_INFINITY){
				System.out.println("\nwygrany: komputer\n");			
				System.out.println(s.toString());
				break;
			}
//----------
			System.out.println(s.toString());
			System.out.println("\n");
			
			//ruch czlowieka
			do{
				System.out.println("\nnr.kolumny: \n");
				line = inReader.readLine();
				move = Integer.valueOf(line);

			} while (move >= s.boardWidth || move < -1);
			
			s.makeMove(move);
//----------			
			//sprawdz czy wygrana
			if(s.computeHeuristicGrade() == Double.NEGATIVE_INFINITY){
				System.out.println("\n Wygrales!\n");
				System.out.println(s.toString());
				break;
			}
			else if(s.computeHeuristicGrade() == Double.POSITIVE_INFINITY){
				System.out.println("\nWygral‚ komputer\n");
				System.out.println(s.toString());
				break;
			}
//----------
			//wypisz plansze
			System.out.println("\n"+s.toString()+"\n");
		}
	}

}
