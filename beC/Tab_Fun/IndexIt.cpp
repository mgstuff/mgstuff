#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;



void check_it(int input)
{
    int tab[input];
    int x;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 50 + 1;
        tab[i] = x;
        if(i % 2 == 0 && i != 0)
        {
            cout << "Index no. " << i << "\t";
            cout << tab[i] << endl;
        }
    }

}
int main()
{
    srand( time( NULL ) );
    check_it(20);
}
