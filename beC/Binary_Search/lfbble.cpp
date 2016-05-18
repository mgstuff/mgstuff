#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <algorithm>
#include <array>

const int sizear = 1000;

//@mgstuff

using namespace std;

void half_and_half(std::array<int, sizear> tab,int target);
void buuuble_sort(std::array<int, sizear> tab);

int main()
{
    srand (time(NULL));
    std::array<int, sizear> tab;

    for(int i=0; i<tab.size(); i++)
    {
        tab[i] = rand() % 8340+1;
    }

    buuuble_sort(tab);
    half_and_half(tab, 68);

    return 0;
}
void buuuble_sort(std::array<int, sizear> tab)
{

    cout << "Non Sorted Tab" << endl;
    for(int i=0; i<tab.size(); i++)
    {
        cout << tab[i] << "||";
    }
    int tmp;
    for(int i=0; i<tab.size(); i++)
    {
        for(int j=0; j<tab.size(); j++)
        {
            if(tab[j] > tab[j+1])
            {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }

    cout << endl << endl;
    cout << "Sorted Tab" << endl;
    for(int i=0; i<tab.size(); ++i)
    {
        cout << tab[i] << "||";
    }
}

void half_and_half(std::array<int, sizear> tab,int target)
{
    int begin_tab = 0;
    int max_tab_size = tab.size();
    int mid_pro = (begin_tab + max_tab_size)/2;

    cout << endl << endl;
    cout << "Mid of our array:\t"<< tab[mid_pro];

    cout << endl << endl;
    cout << "Number to be found:\t" << target << endl << endl;

    if(target < tab[mid_pro])
    {
        for(int j=0; j<tab[mid_pro]; j++)
        {
            if(tab[j] == target)
            {
                cout << "Your Number is found at the position less than the mid one:\t" << target << endl << endl;
                break;
            }
        }
    }
    else if(target > tab[mid_pro])
    {
        for(int j=tab[mid_pro]; j>=tab[mid_pro]; j++)
        {
            if(tab[j] == target)
            {
                cout << "Your Number is found at the position higher than the mid one:\t" << target << endl << endl;
                break;
            }
        }
    }
    else if(target == tab[mid_pro])
    {
        cout << "Was at the mid:\t" << target << endl << endl;
    }
}
