#include <stdio.h>
#include <math.h>
#include <stdlib.h>



void findWinner()
{
    int iloscTestow;
    int randomnumber;
    int osoba = 1;
    int n=1;
    int p=1;

    printf("Ilosc Testow:\t");
    scanf("%d\n",&iloscTestow);
    printf("Liczba do osiagniecia:\t");
    scanf("%d\n",&n);

    while(!(p >= n))
    {
        srand(time(NULL));
        randomnumber = rand() % 9 + 2;
        p = p * randomnumber;
        printf("%d\n",p);
        n++;
    }
    if(n%2 == 0)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }
}

