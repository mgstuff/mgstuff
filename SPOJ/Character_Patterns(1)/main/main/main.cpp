//
//  main.cpp
//  http://www.spoj.com/problems/CPTTRN1/
//
//  Created by Michał Grycki on 30.12.2015.
//  Copyright © 2015 Michał Grycki. All rights reserved.
//
#include <iostream>

using namespace std;

void Pattern()
{
    int l = 0;
    int c = 0;
    
    int t = 0;
    cout << "Put number of tests:\t";
    cin >> t;
    cout << endl;
    cout << "Number of lines:\t";
    cin >> l;
    cout << endl;
    cout << "Number of columns\t";
    cin >> c;
    
    for (int i=0; i<=c; i++)
    {
        for (int j=0; j<=l; j++) {
            cout << "*";
        }
    }
    
}

int main(int argc, const char * argv[]) {
    Pattern();
    return 0;
}
