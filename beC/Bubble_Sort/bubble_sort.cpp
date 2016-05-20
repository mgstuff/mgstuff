#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <stdio.h>

using namespace std;

void bubble_sux_ascending();



int main()
{
    bubble_sux_ascending();
    return 0;
}


void bubble_sux_ascending()
{

    srand (time(NULL));
    int tab[100];

    for(int i=0; i<=sizeof(tab)/4; i++)
    {
        tab[i] = rand() % 8899+1;
    }

    cout << "Before sorting:\t";
    for(int i=0; i<=sizeof(tab)/4; i++)
    {
        cout << "|";
        cout << tab[i];
    }

    int sw;
    for(int i=0; i<=sizeof(tab)/4; i++)
    {
        for(int j=0; j<=sizeof(tab)/4; j++)
        {
            if(tab[j] > tab[j+1])
            {
                sw = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = sw;
            }
        }
    }

    cout << endl << endl;
    cout << "After sorting:\t";
    for(int i=0; i<=sizeof(tab)/4; i++)
    {
        cout << "|";
        cout << tab[i];
    }
}






