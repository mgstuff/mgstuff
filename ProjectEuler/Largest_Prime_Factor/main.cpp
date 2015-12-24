#include <iostream>


using namespace std;


void prime()
{
	long long n= 600851475143;
	long long z=2;
	while(z * z <=n)
	{
		if(n%z==0)
		{
			cout << z;
			cout << endl;
			n /= z;
		}
		else
		{
			z++;
	
		}
	if(n>1)
	{
		cout <<"Largest prime:"<< n << endl;
	}
	}
}




int main()
{
	prime();

	return 0;
}
