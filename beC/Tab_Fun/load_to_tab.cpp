#include <iostream>
#include <stdlib.h>

//14. Tablice[Arrays]

using namespace std;



//14.1 Napisz program wczytuj¹cy z klawiatury 10 liczb ca³kowitych. Wczytane liczby nale¿y wydrukowaæ na ekranie.

void load(int a)
{
    int tab[a];
    cout << "Put 10 values inside" << endl;;
    for(int i = 1; i<=10; ++i)
    {
        cout << i << "." << "\t";
        cin >> tab[i];
        cout << endl;
    }
    for(int j=1; j<=10; j++)
    {
        cout << j << "." << "\t" << tab[j] << endl;
    }
}

//14.2 Napisz program wczytuj¹cy z klawiatury 10 liczb ca³kowitych. Wczytane liczby nale¿y wydrukowaæ na ekranie w odwrotnej kolejnoœci.

void load_reverse_out(int a)
{
    int tab[a];
    cout << "Put 10 values inside" << endl;;
    for(int i = 1; i<=10; i++)
    {
        cout << i << "." << "\t";
        cin >> tab[i];
        cout << endl;
    }
    for(int j=10; j>=1; j--)
    {
        cout << j << "." << "\t" << tab[j] << endl;
    }
}

/*
14.3
Napisz program wczytuj¹cy z klawiatury n liczb ca³kowitych. Liczbê n nale¿y pobraæ z klawiatury.
Jeœli wartoœæ n podana przez u¿ytkownika jest liczb¹ z zakresu od 1 do 30, wówczas program ma wczytaæ podan¹ iloœæ liczb ca³kowitych, a nastêpnie wczytane liczby wydrukowaæ na ekranie. Jeœli natomiast podana wartoœæ n jest liczb¹ spoza przedzia³u [1; 30], wówczas program koñczy pracê drukuj¹c stosowny komunikat.
W zadaniu nale¿y wykorzystaæ trzydziestoelementow¹ tablicê liczb ca³kowitych.
Zwrot „program wczytuj¹cy z klawiatury n liczb ca³kowitych” wystêpuj¹cy w kolejnych zadaniach nale¿y rozumieæ tak jak bie¿¹cym zadaniu.
W programie powinna znaleŸæ siê deklaracja tablicy liczb o dowolnym, ale ustalonym wymiarze (np. int tab[82];) oraz zmienna n.
Wartoœæ zmiennej n wczytujemy z klawiatury.
Jeœli zmienna n podana przez u¿ytkownika jest poprawna (w naszym przyk³adzie n powinno byæ wiêksze od 0 i mniejsze od 83) wówczas program realizuje zadanie
okreœlone w treœci.
W przeciwnym razie program koñczy pracê wyœwietlaj¹c komunikat: „Niepoprawne iloœæ liczb!”
*/

void super_task()
{
    int input;
    int x;

    cout << "How many numbers:" << "\t" << endl;
    cin >> input;
    int tab[input];
    if(input >= 1 && input <=30)
    {
        for(int i=1; i<=sizeof(tab)/4; i++)
        {
            x = rand() % 50+1;
            tab[i] = x;
            cout << i << "." << tab[i] << endl;
        }
    }
    else
    {
        cout << "Wrong number" << endl;
    }
}

int main()
{
    //load(10);
    //load_reverse_out(10);
    super_task();
    return 0;
}
