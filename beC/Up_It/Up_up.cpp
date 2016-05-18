#include <iostream>
#include <math.h>

using namespace std;

void wanna_be_bigger(double base_number, int power_to);

int main()
{
    cout << pow(2,10);

    //wanna_be_bigger(2,10);
    return 0;
}

void wanna_be_bigger(double base_number,int power_to)
{

   double mybro = 1;
   for(int i=1; i<= power_to; i++)
   {
        mybro = mybro * base_number;
   }
   cout << mybro;

}
