#include <iostream>
void dolar(int n)
{
    if (n>= 1 && n <= 1000000) {
        for (int i=1; i<=n; i++) {
            std::cout << "$";
        }
    }
}
int main(int argc, const char * argv[]) {
    int z;
    std::cin >> z;
    dolar(z);
    return 0;
}
