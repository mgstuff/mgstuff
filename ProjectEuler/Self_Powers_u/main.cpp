#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;


void Powers()
{
	int n;
	std::string perfect;
	unsigned int sum = 0;
	std::stringstream stream;
	for(n=1; n<=1000; n++)
		sum += pow(n,n);
		perfect = std::to_string(sum);
	cout << perfect;
}

int main()
{
	Powers();
	return 0;
}
