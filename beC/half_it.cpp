#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <stdio.h>
#include <algorithm>
#include <array>


using namespace std;

void half_and_half(int arr[],int target, int how_big);
void buuuble_sort(int arr[]);

int main()
{
    const int sizear = 100;

    std::array<int, sizear> tab;


    for(int i=0; i<=tab.size(); i++)
    {
        tab[i] = rand() % 8899+1;
    }

     for(int i=0; i<=tab.size(); i++)
    {
        cout << tab[i] << endl;
    }

    //buuuble_sort(tab);


    return 0;
}

/*
void half_and_half(int sorted_arr[], int target, int how_big)
{
    for(int i=0; i<=sizeof(sorted_arr)/4; i++)
    {
        if()
    }

}
*/

void buuuble_sort(int arr[])
{
    cout << "Non Sorted Tab" << endl;
    for(int i=0; i<=sizeof(arr)/4; i++)
    {
        cout << arr[i] << "||";
    }


    int tmp;
    for(int i=0; i<=sizeof(arr)/4; i++)
    {
        for(int j=0; j<=sizeof(arr)/4; j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[j] = arr[i];
                tmp = arr[j];
            }
        }
    }


    cout << endl;
    cout << "Sorted Tab" << endl;
    for(int i=0; i<=sizeof(arr)/4; i++)
    {
        cout << arr[i] << "||";
    }



}


