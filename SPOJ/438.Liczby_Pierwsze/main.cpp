#include <iostream>
#include <math.h>

using namespace std;
void Pierwsze()
{
	int n;
	int liczba;
	cin >> n;
	if(n<100000)
	{
	for(int p=1; p<n; p++){
		if(liczba>=1 && liczba<=10000)
		{
			if(liczba%p == 0)
			{
				cout << "TAK";
			}
			else
			{
				cout <<"NIE";
			}
			cout << endl;
		}
		}
	}
	else
	{
		cout <<"Wrong n";
	}
}
int main(){
	Pierwsze();
	return 0;
}
