//
//  main.cpp
//  Lab_5
//
//  Created by Michał Grycki on 23.01.2016.
//  Copyright © 2016 Michał Grycki. All rights reserved.
//

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



class Sinus {
    friend class APSK;
    friend class Spectre;
    friend class AmPm;
public:
    float pi = 3.1415926536;
    float fi = 0.5;
    float ft = 532;
    float A = 5;
    float T;
    float fs = ft*2;
    float N;
public:
    Sinus();
    void Generate_Sinus();
};

Sinus::Sinus(): T(2)
{
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
    vector<float> amodulacja;
    vector<float> pmodulacja;
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

class APSK : Sinus
{
    friend class Sinus;
public:
    vector<int> binary_signal = {0,1,1,1,0,1,0,1};
    vector<int> ask_demodulation_signal;
    vector<int> fsk_demodulation_signal;
    vector<int> psk_demodulation_signal;
    vector<float> askmodulacja;
    vector<float> fskmodulacja;
    vector<float> pskmodulacja;
    
    int N = 2000;
    int A = 2;
    float tb = 8;
    int freq = 500;
    float faza = 2.14;
    float f1 = N+1/tb;
    float f2 = N+2/tb;
    
    float askdemodulationone = 0;
    float askdemodulationzero = 0;
    
    float fskdemodulationone = 0;
    float fskdemodulationzero = 0;
    
    float pskdemodulationone = 0;
    float pskdemodulationzero = 0;

public:
    void Generate_ASK_and_Demodulate();
    void Generate_FSK_and_Demodulate();
    void Generate_PSK_and_Demodulate();
};


void APSK::Generate_ASK_and_Demodulate()
{
    for (int t = 0; t<= 8; t++) {
        if (binary_signal.at(t) == 1)
        {
            askmodulacja.push_back(A*sin(2*pi*f1*t/freq+faza));
        }
        else
        {
            askmodulacja.push_back((A*sin(2*pi*f1*t/freq+faza))/4);
        }
        if (askmodulacja[t] >= 50)
        {
            ask_demodulation_signal.push_back(1);
        }
        else if (askmodulacja[t] < 50)
        {
            ask_demodulation_signal.push_back(0);
        }
    }
}


void APSK::Generate_FSK_and_Demodulate()
{
    for (double t = 0; t <= 8; t++)
    {
        if (binary_signal.at(t) == 1)
        {
            fskmodulacja.push_back(A*sin(2*pi*f1*t/freq+faza));
        }
        else
        {
            fskmodulacja.push_back(A*sin(2*pi*f2*t/freq+faza));
        }
        if (fskmodulacja[t] >= 50)
        {
            fsk_demodulation_signal.push_back(1);
        }
        else if(fskmodulacja[t] < 50)
        {
            fsk_demodulation_signal.push_back(0);
        }
    }
}

void APSK::Generate_PSK_and_Demodulate()
{
    for (double t = 0; t <= 8; t++)
    {
        if (binary_signal.at(t) == 1)
        {
            pskmodulacja.push_back(A*sin(2*pi*f1*t/freq+faza));
        }
        else
        {
            pskmodulacja.push_back(A*sin(2*pi*freq*t/freq+faza+pi));
        }
        if (pskmodulacja[t] >= 50)
        {
            psk_demodulation_signal.push_back(1);
        }
        else if(pskmodulacja[t] < 50)
        {
            psk_demodulation_signal.push_back(0);
        }
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
    
    APSK apsk;
    apsk.Generate_ASK_and_Demodulate();
    apsk.Generate_FSK_and_Demodulate();
    apsk.Generate_PSK_and_Demodulate();

    return 0;
    
}







