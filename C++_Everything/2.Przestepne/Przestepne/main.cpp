#include <iostream>

using namespace std;




int main(int argc, const char * argv[]) {
    int r;
    cout << "Wprowadz rok:\t";
    cin >> r;
    
    if (r >= 1 && r <= 8000) {
        if (r%4 == 0) {
            cout << "TAK";
        }
        
        else if(r%100 == 0 && r%400 != 0 ){
            cout << "NIE";
        }
    }
}
