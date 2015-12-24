#include <iostream>

using namespace std;

void Reverse()
{
	int n;
	int l[n];
	cout << "Wprowadz n:\t";
	cin >> n;
	if(n<10000)
	{
		for(int i=0; i<=n; i++)
		{
			cin >> l[i];	
		}
	}
	else
	{
		cout << "Podales zle n";
	}
	for(; n>=0; n--)
	{	
		cout << l[n];
		cout << endl;
	}
}

int main()
{
	Reverse();
	return 0;
}
