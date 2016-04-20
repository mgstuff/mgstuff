#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <stdio.h>

using namespace std;

void insert_me(int (&tab)[100]);
void insertionSort(int (&arr)[100]);

int main()
{
    const int MAX = 100;
    int tab[MAX];
    for(int i=0; i<=sizeof(tab)/4; i++)
    {
        tab[i] = rand() % 8899+1;
    }
    //int tab[MAX] = {6,2,3,42,10,13,5};
    //insert_me(tab);

    //insertionSort(tab);

}

void insertionSort(int (&arr)[100])
{
    cout << "Before sorting" << endl;
    for(int i=0; i<sizeof(arr)/4; i++)
    {
        cout << arr[i] << "||";
    }
    cout << endl << endl;


    for (int i = 1; i < sizeof(arr)/4; i++)
    {
        // a temporary copy of the current element
        int tmp = arr[i];
        int j;

        // find the position for insertion
        for (j = i; j > 0; j--)
        {
            if (arr[j - 1] < tmp)
                break;
            // shift the sorted part to right
            arr[j] = arr[j - 1];
        }

        // insert the current element
        arr[j] = tmp;
    }

    cout << "After sorting" << endl;
    for(int i=0; i<sizeof(arr)/4; i++)
    {
        cout << arr[i] << "||";
    }
    cout << endl << endl;
}

void insert_me(int (&tab)[100])
{
    int *unsorted;
    int *sorted_value;

    int key;
    int see;

    for(int i=0; i<sizeof(tab)/4; i++)
    {
        cout << tab[i] << "||";
    }
    cout << endl << endl;



    for(int i=1; i<sizeof(tab)/4; i++)
    {
        key = tab[i];
        for(int j=1; j<=sizeof(tab)/4; j++)
        {
            //cout << "Outside loop no.:\t" << tab[i] << "\t"<< "Inside loop no.:\t" << tab[j] << endl;
            if(key < tab[j-1])
            {
                see = tab[j];
                tab[j] = tab[j-1];
                tab[j-1] = see;
            }

        }

    }

    cout << "After Sorting\t";

    for(int i=0; i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << "||";
    }



}
