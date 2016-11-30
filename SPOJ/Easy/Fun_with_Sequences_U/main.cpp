#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> z;

void Sequences()
{
	int temp;
	int n = 0;
	int s[n];
	int m = 0;
	int q[m];
	int i;
	int z[i];
	int z_index = 0;
	cout << "Wprowadz n:\t";
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> s[i];
	}
	
	cout << "Wprowadz m:\t";
	cin >> m;
	for(i=0; i<m; i++)
	{
		cin >> q[i];
	}
	
	bool flag = false;	
	for(i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(s[i] != q[j])
			{	
				if(flag == false)
				{
				z.push_back(s[i]);								flag = true;
				}
			}
		}flag = false;
	}
	cout << endl << endl;
	cout << z.size();

}

int main(void)
{
	Sequences();
	return 0;
}
