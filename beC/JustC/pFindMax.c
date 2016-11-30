#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int *FindMax(int nArray[],int n)
{

    return 0;
}


int *nAskForDigit(int *nArray, int nSizeOfArray)
{
    int *pMax;
    int nTmp_First = 0;
    int nTmp_Second = 0;

    if(nSizeOfArray < 0)
    {
        do
        {
            printf("Give the size of array:\t");
            scanf("%d", &nSizeOfArray);
        } while(nSizeOfArray < 0);
    }

    nArray = (int *)malloc(nSizeOfArray * sizeof(int)); //Allocation of memory for nSizeOfArray number of ints
    for(int i=0; i<=nSizeOfArray; i++)
    {
        nArray[i] = (rand() % 500) + 1; //Assign to every element of tab value 0
    }

    for(int i=0; i<nSizeOfArray; i++)
    {
        printf("%d. %d\n",i,nArray[i]);
    }

    for(int i=0; i<nSizeOfArray; i++)
    {
        for(int j=0; j<nSizeOfArray; j++)
        {
            if(nArray[j] < nArray[j+1])
            {
                nTmp_First = nArray[j];
                nTmp_Second = nArray[j+1];
                nArray[j] = nTmp_Second;
                nArray[j+1] = nTmp_First;
            }
        }
    }

    printf("\n\n");

    pMax = *nArray;

    return pMax;
}

/*
int main(void)
{

    time_t t;
    srand((unsigned) time(&t));
    int nSize = 0;
    int nSizeOfArray = 0;
    int *nArray; //Here i have got array already
    int pMax;

    printf("Give the size of array:\t");
    scanf("%d", &nSizeOfArray);

    pMax = nAskForDigit(*nArray,nSizeOfArray);

    printf("Max Value is: %d",pMax);


    return 0;
} */
