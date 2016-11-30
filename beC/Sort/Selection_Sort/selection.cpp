#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <stdio.h>

using namespace std;

void fill_tab(int tab_size)
{
    int tab[tab_size];
    int *lowest_num;

    srand (time(NULL));

    //fill tab
    for(int i=0; i<=tab_size; i++)
    {
        tab[i] =rand() % 1000+1;
    }

    /*
    for(int i=0; i<=tab_size; i++)
    {
        cout << "[" << i <<"]" << "\t"<< tab[i] << endl;
    }
    */

    for(int i=0; i<=tab_size; i++)
    {
        lowest_num = &tab[0];
        if(*lowest_num > tab[i])
        {
            *lowest_num = tab[i];
        }
    }
    cout << endl;
    cout << "Lowest number in set:\t" << *lowest_num << endl << endl;

    for(int i=0; i<=tab_size; i++)
    {
        lowest_num = &tab[i];
        cout << *lowest_num << endl;
        if(*lowest_num > tab[i+1])
        {
            cout << "Lowest_num:\t"<< *lowest_num << "Tab num:\t" << tab[i+2] << endl;
            *lowest_num = tab[i+1];

        }
    }

    for(int i=0; i<=tab_size; i++)
    {
        cout << "[" << i <<"]" << "\t"<< tab[i] << endl;
    }


}

int main(void)
{
    fill_tab(100);

    return 0;
}

