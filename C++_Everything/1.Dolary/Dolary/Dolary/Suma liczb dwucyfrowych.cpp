//
//  Suma liczb dwucyfrowych.cpp
//  Dolary
//
//  Created by Michał Grycki on 14.12.2015.
//  Copyright © 2015 Michał Grycki. All rights reserved.
//

#include <iostream>

using namespace std;

void dwucyfrowe() {
    int n;
    cin >> n;
    if (n>= 1 && n<= 1000000) {
        cout << n;
    }
}



int main(int argc, const char * argv[]){
    dwucyfrowe();
    return 0;
    
}
