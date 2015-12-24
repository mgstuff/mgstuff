#include <iostream>

using namespace std;

void Multiples()
{
	int n;
	int z = 0;
	for(n=1; n<1000; n++)
		if(n%3 == 0 || n%5 == 0)
			z +=n;
	cout << z;
}


void Multiple()
{
	int n;
	for(n=1; n<10; n++)
		if(n%3 == 0 || n%5 == 0)
			cout << n;
			cout << endl;
}

int main()
{
	Multiples();
	return 0;

}
