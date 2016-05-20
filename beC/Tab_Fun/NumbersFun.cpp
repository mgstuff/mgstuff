#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <stack>          // std::stack


using namespace std;

//17.4 [4,15)
void print_range(int how_big)
{
    int tab[how_big];
    int x;
    int z;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 50 + 1;
        tab[i] = x;
        cout << tab[i] << endl;
    }

    cout << endl;
    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] >= 4 && tab[i] < 15)
        {
            cout << tab[i] << endl;
        }
    }
}

//17.5
void print_each_digit(int how_big)
{
    int tab[how_big];
    int digit;
    int x;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        x = rand() % 50 + 1;
        tab[i] = x;
        cout << tab[i] << endl;
    }
    cout << endl;

    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        cout << tab[i] << endl;
    }
    cout << endl;



    for(int i=(sizeof(tab)/4)/(sizeof(tab)/4); i<=sizeof(tab)/4; i++)
    {
        if(tab[i] >= 10)
        {
            digit = tab[i] % 10;
            cout << digit << endl;
            {
                if(digit % 2 == 0 && digit != 0)
                {
                    cout << digit << endl;
                    cout << "Digit is even" << endl;
                }
            }
        }
    }
    /*
    if(x >= 10)
    {
       print_each_digit(x / 10);
    }


    int digit = x % 10;

    std::cout << digit << '\n';
    if(digit % 2 == 0 && digit != 0)
    {
        cout << "Digit is even" << endl;
    }
    */
}



int main()
{
    srand( time( NULL ) );
    //print_range(20);
    print_each_digit(10);

}
