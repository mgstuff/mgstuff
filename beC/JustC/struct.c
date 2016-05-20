#include <stdio.h>
#include <stdlib.h>



typedef struct my_s
{
    char Nazwa[20];
    float Cena;
    int ilosc;
} Element;




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


struct Wezel
{
    int szer;
    int wys;
    struct Wezel *next;
};

void somefunc(unsigned long int fvar)
{
    *(float*)fvar = 99;
}

