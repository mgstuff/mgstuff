#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;



class Klasa
{
public:
    int z = 132;
    int *superp = &z;
    void methodd(int, int);

};

void fajnafun(int *a)
{
    cout << *a << endl;
}

void superfun()
{
    int *ptr;
    int **ptrr;
    int val = 10;
    int tablica[30];

    ptr = &val;
    val = val + 10;
    cout << *ptr << endl;

    int& f = *ptr;

    cout << f;
}

void mf();

void mf(int *a, int *b, int *c, int *d)
{
    int temp;

    temp = *c;

    *a = *b;
    cout << *a << endl;
    cout << temp << endl;

}

void task(int *a, int *b)
{
    cout << *a << endl;
}

void tasktask(int &a, int &b)
{
    cout << a;
}




void imptr()
{
    int bar = 3;
    int *p;

    p = &bar;
}

void uptr()
{

}

int main(int argc, char** argv)
{
    const int value = 14;
    const int *ptr = &value;



    cout << *ptr;

    //superfun();
    /*
    int a = 10;
    int b = 40;
    int c = 99;
    int d = 103;

    mf(&a, &b, &c, &d);

    int *z;
    int mx = 14;

    cout << &mx << endl;

    z = &mx;

    cout << *z << endl;

    int& let = mx;
    cout << let << endl;


    int liczbowo = 140;
    int& referencyjne = liczbowo;

    cout << referencyjne << endl;
    */





    /*
    int var[4] = {10,20,30,40};
    int *wskaznik;


    int vala = 5;

    int *wuk;
    int **wuuk;
    int ***wuuuk;

    wuk = &vala;
    cout << *wuk << endl;

    cout << wuuk;
    */

    return 0;
}





void funny()
{
	//Pointer to char
	char Z = 'A';
	char newz ='B';
	char *cptr = NULL;
    char *nptr = NULL;
	cptr = &Z;
	cout << *cptr << endl;
	nptr = &newz;
	cout << *nptr << endl;

	//Pointer to pointer
	char take = 'F';
	char *tfptr = NULL;
	char **tptr = NULL;
	tfptr = &take;
	tptr = &tfptr;
	cout << *tfptr << endl;
	cout << **tptr << endl;

    //10 char array pointer
    int mytab = 10;
    int *myptr;
    myptr = &mytab;
    char* tabptr[*myptr] = {"m","g","g","i","t","h","u","b","d","c"};
   // char *tabptr[2];
    //for(int i = 0; i < 2; ++i)
   // {
   //     tabptr[i] = new char;
   // }
   // *tabptr[0] = 'A';
   // *tabptr[1] = "Adam";
   for(int i =0; i<*myptr; i++)
   {
        cout << tabptr[i] << endl;
   }

    //const pointer to int
    const int *cpoint;
    int point = 10;
    int secondpoint = 20;

    cpoint = &point;
    cout << point << endl << endl;
    cout << *cpoint << endl;

    //fun

    Klasa sc;
    sc.methodd(4,5);

    cout << endl << endl;
    cout << "TABS" << endl;

    int tab[4] = {2,4,5,10};
    int *ptr;

    ptr = tab;

    for(int i =0; i<4; i++)
    {
            cout << *(ptr + i);//ptr[0] //Wypisze w kolejnosci kazdy elemenet
            cout << endl;
    }


}




void Klasa::methodd(int a, int b)
    {
        cout << a*b;
    }

char fun(char *pc)
{
    return *pc;
}
