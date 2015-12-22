#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
vector<int> licz;
int wynik;
void dwucyfrowe() {
    int a;
    int n;
    cin >> n;
    if(n>=1 && n<=1000000)
    {
        for (int i=1; i<=n; i++)
        {
            cin >> a;
            if(a >=1 && a<= 1000)
            {
                licz.push_back(a);
            }
        }
    }
}
void trzycyfrowe() {
    cout << endl;
    cout << licz.size();
    cout << endl;
    for (size_t i=1; i<licz.size(); i++)
    {
        if (licz[i] >= 10 && licz[i] <100) {
            wynik += licz[i];
        }
    }
                cout << wynik;
}
int main(int argc, const char * argv[]) {
    dwucyfrowe();
    trzycyfrowe();
    return 0;
}
