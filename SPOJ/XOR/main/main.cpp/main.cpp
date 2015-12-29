//
//  main.cpp
//
//  Created by Michał Grycki on 29.12.2015.
//  Copyright © 2015 Michał Grycki. All rights reserved.
//

#include <iostream>

using namespace std;

void Xor()
{
    int p = 0;
    int q = 0;
    int zero = 0;
    int one = 1;
    
    cin >> p;
    cin >> q;
    
    if (p == 0 && q == 0)
    {
        cout << zero;
    }
    else if (p == 0 && q == 1)
    {
        cout << one;
    }
    else if (p == 1 && q == 0)
    {
        cout << one;
    }
    else if (p == 1 && q == 1)
    {
        cout << zero;
    }
}


int main(void)
{
    Xor();
    return 0;
}
