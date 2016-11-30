/*
 * Michal Grycki
 * KC001 - Dodawanie liczb całkowitych
*/


#include <stdlib.h>
#include <stdio.h>

int main(void) {

int sum=0;
int arr_to_store_numbers[3];
int number_to_store = 0;

for(int i=0; i<3; i++) {
	do {
		scanf("%d", &number_to_store);
	} while( number_to_store > 100 );
	arr_to_store_numbers[i] = number_to_store;
	sum += arr_to_store_numbers[i];
}
printf("%d", sum);



return 0;
}
