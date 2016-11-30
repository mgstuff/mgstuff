#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int
isPalindrome(char *palidrome)
{

	bool me = true;
	size_t len = strlen(palidrome);


	if(strlen(palidrome) <= 1)
	{
		return me;
	}
	if(*palidrome != *(palidrome+(len-1)))
	{
		return !me;
	}

/* memmove funkcjonuje jako funkcja ktora moze zmieniac rozmiar np tekstu
/* w ponizszym przypadku uzywamy
/* memmove(palidrome <- destination, palidrome+1 <- to zrodlo, i zaczynamy od elemendtu palidrome[1] czyli nie
						nie od pierwszego elementu a drugiego, len-2 <- maksymalna wielkosc tablicy jest rowna
						rozmiarowi tablicy -2)
*/
	memmove(palidrome, palidrome+1, len-2);
	palidrome[len-2] = 0;

	return isPalindrome(palidrome);
}



int
main(void)
{
	bool answer;
	char array[] = "rotor";
	answer = isPalindrome(array);
	printf("%d\n",answer);
	return 0;
}
