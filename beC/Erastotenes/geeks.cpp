#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void Erastotenes(int input)
{
    int tab[input];
    int x;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 24+2;
        tab[i] = x;
    }

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << endl;
    }

    cout << endl << endl;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] % 2 != 0 && tab[i] != 2)
        {
            cout << tab[i] << endl;
        }
    }
}



int main()
{
    //srand (time(NULL));
    Erastotenes(10);
    return 0;
}
