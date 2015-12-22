#include <iostream>
#include <math.h>
#include <vector>
#include <complex>
#include <fstream>
using namespace std;

vector<float> sinus;

class Sinus {
public:
	float pi = 3.1415926536;
	float N;	
	float fi;
	float ft;
	float A;
	float T;
	float fs;
public:
	Sinus();
	void Generate_Sinus();


};

Sinus::Sinus(): T(2), A(5), ft(532), fi(0.5)
{
	fs = ft*2;
	N = T*fs;
}

void Sinus::Generate_Sinus()
{
	for(int t=0; t<=N-1; t++) {
		float sinu = A*sin(2*pi*t*ft/fs+fi);
		sinus.push_back(sinu);
	}
}

int main() {
	Sinus sin;
	sin.Generate_Sinus();

}


