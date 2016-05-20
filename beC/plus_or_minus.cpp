#include <iostream>


using namespace std;


void who_are_you(float who)
{
	if(who < 0)
	{
		cout << "EQ 0" << endl;
	}
	else if(who > 0)
	{
		cout << "GT 0" << endl;
	}
	else
	{
		cout << "LT 0" << endl;
	}	
	
}

int main()
{
	who_are_you(3);
	who_are_you(-2);
	who_are_you(0);
	return 0;
}
