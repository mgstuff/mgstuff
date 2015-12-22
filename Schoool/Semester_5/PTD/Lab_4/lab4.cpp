#include <iostream>
#include <math.h>
#include <vector>
#include <complex>
#include <fstream>

using namespace std;

vector<float> sinus;
vector<float> spectrum;
vector<float> ximagine;
vector<float> xreal;
vector<float> amodulacja;
vector<float> pmodulacja;

class Sinus {

	friend class Spectre;
	friend class AmPm;
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

class Spectre : Sinus {
	
	friend class Sinus;
	friend class AmPm;
public:
	float xre;
	float xim;
	float w;
	float zespolona;
public:
	Spectre();
	void Generate_Spectrum();

};

Spectre::Spectre()
{
	N = 0;
	N = T*fs;
}

void Spectre::Generate_Spectrum()
{
	w = 0;
	sinus.begin();
	for(int k=0; k<N; k++) {
		xre = 0;
		xim = 0;
		for(int n=0; n<N; n++) {
			w = ((-2*pi*n*k)/N);
			xre += sinus[n] * cos(w);
			xreal.push_back(xre);
			xim += sinus[n] * sin(w);
			ximagine.push_back(xim);
		}
	zespolona = abs(sqrt((xreal[k] * xreal[k]) + (ximagine[k] * ximagine[k])));
	spectrum.push_back(zespolona);
	}
}


class AmPm : Spectre {

	friend class Sinus;
public:
	float kam = 0.5;
	float kpm = pi/2;
	float am;
	float pm;
public:
	void Generate_AM();
	void Generate_PM();
};
	
void AmPm::Generate_AM()
{
	for(int i=0; i<N-1; i++) {
		am=((1+kam*sinus[i])*sin(2*pi*fs*i+fi));
		amodulacja.push_back(am);
	}

}

void AmPm::Generate_PM()
{
	for(int i=0; i<N-1; i++) {
		pm=(A*sin(2*pi*fs*i+kpm*sinus[i]));
		pmodulacja.push_back(pm);
	}
}




int main() {

	Sinus sin;
	sin.Generate_Sinus();

	Spectre spec;
	spec.Generate_Spectrum();
	
	AmPm am;
	am.Generate_AM();
	
	AmPm pm;
	pm.Generate_PM();

}


