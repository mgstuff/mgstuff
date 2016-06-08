#include<iostream>

using namespace std;





void Wow()
{
	int x=0;
	int i=0;
	cin >> x;
	if(x>0 && x<50)
	{
		cout << "W";
		for(i=1; i<=x; i++)
		{
			cout <<"o";
		}
		cout << "w";
	}

	cout << "XYZ";
}






int main(void)
{
	Wow();
	return 0;
}
