#include <iostream>
#include <stdlib.h>

//14. Tablice[Arrays]

using namespace std;



//14.1 Napisz program wczytuj�cy z klawiatury 10 liczb ca�kowitych. Wczytane liczby nale�y wydrukowa� na ekranie.

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

//14.2 Napisz program wczytuj�cy z klawiatury 10 liczb ca�kowitych. Wczytane liczby nale�y wydrukowa� na ekranie w odwrotnej kolejno�ci.

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
Napisz program wczytuj�cy z klawiatury n liczb ca�kowitych. Liczb� n nale�y pobra� z klawiatury.
Je�li warto�� n podana przez u�ytkownika jest liczb� z zakresu od 1 do 30, w�wczas program ma wczyta� podan� ilo�� liczb ca�kowitych, a nast�pnie wczytane liczby wydrukowa� na ekranie. Je�li natomiast podana warto�� n jest liczb� spoza przedzia�u [1; 30], w�wczas program ko�czy prac� drukuj�c stosowny komunikat.
W zadaniu nale�y wykorzysta� trzydziestoelementow� tablic� liczb ca�kowitych.
Zwrot �program wczytuj�cy z klawiatury n liczb ca�kowitych� wyst�puj�cy w kolejnych zadaniach nale�y rozumie� tak jak bie��cym zadaniu.
W programie powinna znale�� si� deklaracja tablicy liczb o dowolnym, ale ustalonym wymiarze (np. int tab[82];) oraz zmienna n.
Warto�� zmiennej n wczytujemy z klawiatury.
Je�li zmienna n podana przez u�ytkownika jest poprawna (w naszym przyk�adzie n powinno by� wi�ksze od 0 i mniejsze od 83) w�wczas program realizuje zadanie
okre�lone w tre�ci.
W przeciwnym razie program ko�czy prac� wy�wietlaj�c komunikat: �Niepoprawne ilo�� liczb!�
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
