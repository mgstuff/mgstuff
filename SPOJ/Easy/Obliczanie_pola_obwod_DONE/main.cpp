#include<iostream>
#include<stdio.h>
using namespace std;

void Pole(int a, int b)
{
	float pole = a*b;
	printf("%.2f ",pole);
}

void Obwod(int a, int b)
{
	float obwod = 2*a + 2*b;
	printf("%.2f",obwod);
}

void Calc()
{
	int a;
	int b;
	int n=0;
	int i=0;
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cin >> a;
		cin >> b;
		Pole(a,b);
		Obwod(a,b);
		cout << endl;		
	}
	
}

int main(void)
{
	Calc();
	return 0;
}
