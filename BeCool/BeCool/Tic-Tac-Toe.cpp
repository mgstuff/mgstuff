//
//  Tic-Tac-Toe.cpp
//  BeCool
//
//  Created by Michał Grycki on 09.03.2016.
//  Copyright © 2016 Michał Grycki. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//Make a two player tic tac toe game.

void tic_tac()
{
    
    int f =3;
    int z = ++f;
    int g = ++f;
    cout << g << z << f;

    
    
    
    string Game_Table[3][3];
    
    int j = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Game_Table[i][j] = "O";
        }
    }
    
    cout << "\t\t\tHello in Tic-Tac-TOE" << endl;
    cout << "\t\t\t\tHave a sit" << endl << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t";
            cout << "|" << "\t";
            cout << Game_Table[i][j];
            cout << "\t";
            cout << "|"<< "\t";
        }
        if ((j = 2)) {
            cout << endl;
        }
    }
    
    string A;
    
    for (int k=0; k<3; k++)
    {
        for (int z=0; z<3; z++)
        {
            cin >> A;
            Game_Table[k][z] = A;
        }
    }
    for (int i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << "\t";
            cout << "|" << "\t";
            cout << Game_Table[i][j];
            cout << "\t";
            cout << "|"<< "\t";
        }
        if ((j = 2)) {
            cout << endl;
        }
    }
    
    
    
    
    
   
    
    
    
}


// * Modify the program so that it will announce when a player has won the game (and which player won, x or o)

// ** Modify the program so that it is a one player game against the computer (with the computer making its moves randomly)

// **** Modify the program so that anytime the player is about to win (aka, they have 2 of 3 x's in a row, the computer will block w/ an o)
