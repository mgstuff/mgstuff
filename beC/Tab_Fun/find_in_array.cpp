#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

// 15.1
void find_max(int input)
{
    int tab[input];

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << "Give the number:\t" << i << "." <<"\t";
        cin >> tab[i];
        cout << endl;
    }
    int tabmax;
    tabmax = tab[0];
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if (tab[i] > tabmax)
        {
            tabmax = tab[i];
        }
    }
    cout << tabmax;

}


// 15.2
void find_smallest(int input)
{
    int tab[input];
    int x;
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 510+1;
        tab[i] = x;
    }
    cout << endl;
    for(int j=(sizeof(tab)/4)/(sizeof(tab)/4); j<=sizeof(tab)/4; j++)
    {
        cout << tab[j] << endl;
    }
    int tablow;
    tablow = tab[0];
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if (tab[i] < tablow)
        {
            tablow = tab[i];
        }
    }
    cout << endl;
    cout << tablow;

}


// 15.3
void find_max_multiple(int input)
{
    int tab[input];

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cin >> tab[i];
    }
    cout << endl;
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << endl;
    }
    int occurance = 0;
    int tabmax = tab[0];

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] > tabmax)
        {
            tabmax = tab[i];
        }
    }

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] == tabmax)
        {
            occurance = occurance + 1;
        }
    }
    cout << endl;
    cout << tabmax << "\t" << occurance << endl;


}

// 15.5
void max_minus_one(int input)
{
    int tab[input];
    int tab_almost_max;
    int tab_max;
    int x;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 610+1;
        tab[i] = x;
    }

    tab_almost_max = tab[1];
    tab_max = tab[1];

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] > tab_max)
        {
            tab_max = tab[i];
        }
    }

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << endl;
    }
    cout << endl;
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] > tab_almost_max)
        {
            if(tab[i] < tab_max)
            {
                    tab_almost_max = tab[i];
            }
        }
    }

    cout << tab_almost_max << endl;
    cout << tab_max << endl;
}

// 15.6
void find_smallest_one(int input)
{
    int tab[input];
    int tab_low_plus;
    int tablow = 0;
    int x;

    //Fill array
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 510+1;
        tab[i] = x;
    }

    cout << endl;

    //Show array
    for(int j=(sizeof(tab)/4)/(sizeof(tab)/4); j<=sizeof(tab)/4; j++)
    {
        cout << tab[j] << endl;
    }
    tablow = tab[2];

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if (tab[i] < tab_low_plus)
        {
            tab_low_plus = tab[i];
            if(tablow > tab_low_plus && tab[i] < tablow)
            {
                tablow = tab[i+1];
            }

        }

    }
    cout << endl;
    cout << tab_low_plus;
    cout << endl;
    cout << endl;
    cout << tablow;

}

//16.1
void upit(int input)
{
    int tab[input];
    int x;

    //Fill tab
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 510+1;
        tab[i] = x;
    }

    //Show Filled tab
     for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << endl;
    }
        cout << endl;
    //To the power of 2
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] * tab[i] << endl;
    }

}

//16.2
void upit(int input, int power)
{
    int tab[input];
    double x;

    //Fill tab
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 510+1;
        tab[i] = x;
    }

    //Show Filled tab
     for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << endl;
    }

    cout << endl;
    //To the power of 2
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << long(pow(tab[i], power)) << endl;
    }

}




int main()
{
    //find_max(10);
	//find_smallest(10);
	//find_max_multiple(10);
	//max_minus_one(10);
	//find_smallest_one(10);
	//upit(5);
	upit(5,3);
	return 0;
}
