#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <stdio.h>

using namespace std;

void bubble_sux();


int main()
{
    bubble_sux();
    return 0;
}


void bubble_sux()
{

    srand (time(NULL));
    int tab[10];

    for(int i=0; i<sizeof(tab)/4; i++)
    {
        tab[i] = rand() % 10+1;
    }


}
