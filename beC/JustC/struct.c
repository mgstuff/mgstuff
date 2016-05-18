#include <stdio.h>
#include <stdlib.h>


typedef struct my_s
{
    char Nazwa[20];
    float Cena;
    int ilosc;
} Element;



typedef struct Klub
{
    int l_zawodnikow;
    int

} klub;

typedef struct Mecz
{


} mecz;


typedef struct paszport
{
    char *nazwisko[50];
    char imie[50];
    char obywatelstwo[50];
    char seria[10];
    int numer;
    char plec;
} Pas; //Teraz nie musze juz pisac za kazdym razem struct paszport, wiec jest to jakby alias dla dwoch slow dla 'struct paszport'


struct Casto
{
    double cena;
    int ilosc;
}   skoda;

int main(void)
{
    struct Casto bmw;
    bmw.cena = 3.14;
    bmw.ilosc = 4;

    printf("%.2f\n\n",bmw.cena);
    printf("%d\n\n",bmw.ilosc);

    struct Casto *sam = &bmw; //Teraz w zmiennej strukturalnej *sam mam dane bmw
    sam->cena = 3444.32;
    sam->ilosc = 453;

    printf("%.2f\n\n",bmw.cena);
    printf("%.2f\n\n",sam->cena);
    printf("%d\n\n",bmw.ilosc);




    return 0;
}
