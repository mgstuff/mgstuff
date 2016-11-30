#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <stdio.h>

using namespace std;
void binary_sux(int arr[], int looking_for, int length);

int main()
{
    srand (time(NULL));

    int wsk_tab[100000];

    for(int i=0; i<sizeof(wsk_tab)/4; i++)
    {
        wsk_tab[i] = rand() % 100000+1;
    }

    binary_sux(wsk_tab,33,100000);


    return 0;
}

void binary_sux(int arr[], int looking_for, int length)
{
     for(int i=0; i<length; i++)
     {
         if(arr[i] == looking_for)
         {
             cout << endl;
             cout << "Found number:\t" << looking_for << endl;
             break;
         }
         else if(arr[i] != looking_for)
         {
             cout << "Wrong Number:\t" << arr[i] << endl;
         }
         else
         {
            cout << endl;
            cout << "Number wasnt found" << endl;
         }
     }
}

void binary_div_and_conq()
{

}



