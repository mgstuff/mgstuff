#include <iostream>
#include <stdlib.h>

using namespace std;


void divide_me(int a,int b)
{
	cout << a/b << endl;
	cout << a%b;
}


int main()
{
	divide_me(10,3);

	return 0;
}
