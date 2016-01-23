#include<iostream>

using namespace std;

void Sums()
{
	int a=0;
	int b=0;
	int i=0;
	int square=0;
	int sum=0;
	cin >> a;
	cout <<" ";
	cin >> b;	
	for(i=a; i<=b; ++i)
		{
			sum = i*i;
			square += sum;
		}
	cout << square;
}

int main(void)
{
	Sums();
	return 0;
}
