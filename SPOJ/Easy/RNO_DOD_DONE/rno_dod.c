/*
 * Michal Grycki
 * RNO_DOD - Proste dodawanie
*/



#include <stdio.h>
#include <stdlib.h>


void sumuj(int l_testow)
{
	int suma=0;
	int i = 0;
	int l_liczb;;
	int arr_to_store_sum[l_testow];
	char temp;

for(int z=0; z<l_testow; z++) { //Glowna petla ktora kontroluje liczbe testow	
	
	l_liczb=0;
	suma = 0;
	i = 0;
	
	//printf("Give n:\t"); //Podaje ilosc liczb do wprowadzenia do tablicy w tym tescie
	scanf("%i", &l_liczb); // Podaje liczbe
	
	int arr_to_store[l_liczb]; //Inicjalizuje tablice
	do {
		scanf("%d%c", &arr_to_store[i], &temp);	
		i++;
		if(i == l_liczb) {
			break;
		}

	} while(temp != '\n');
	
	for(int i=0; i<l_liczb; i++) { //Petla odpowiedzialna za obliczenie sumy podanych liczb
		suma += arr_to_store[i];
	}

	arr_to_store_sum[z] = suma;	//Tu storuje wyniki
}

for(int j=0; j<sizeof(arr_to_store_sum) / sizeof(int); j++) {
	printf("%i\n", arr_to_store_sum[j]);
}

}

int main(void)
{
	int l_testow=0;
	//printf("Give test_n:\t"); //Podaje liczbe testow do zrealizowania
	scanf("%i", &l_testow);
	sumuj(l_testow);

return 0;
}
