//
//  main.cpp
//  rand
//
//  Created by Michał Grycki on 02.01.2016.
//  Copyright © 2016 Michał Grycki. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    for (int i=0; i<=10; i++) {
        int x = rand() % 3;
        cout << x;
        cout << endl;
    }
    switch (x) {
        case <#constant#>:
            <#statements#>
            break;
            
        default:
            break;
    }
    
}
