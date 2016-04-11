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

int main(int argc, char** argv)
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


    return 0;
}



void Klasa::methodd(int a, int b)
    {
        cout << a*b;
    }

char fun(char *pc)
{
    return *pc;
}
