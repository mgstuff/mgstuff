/*
 * Michal Grycki
 * PB0502B - Tablice
*/


#include <stdlib.h>
#include <stdio.h>

//At the end diddn't used pointers at all...

int 
* reverse_me() {
	
	char temp;
	int n_numbers;
	int i;


	n_numbers = 0;
	i = 0;

	scanf("%d", &n_numbers);	
	int a_to_store_num[n_numbers];

do {
	scanf("%d%c", &a_to_store_num[i], &temp);
	i++;
	if(i == n_numbers) {
		break;
	}

} while (temp != '\n');

int *cool_support_array = malloc(sizeof(int) * n_numbers);

//x is equal to real size of the array
int x = sizeof(a_to_store_num)/sizeof(a_to_store_num[0]);

x-=1;

for(int i = x; i>=0; i--) {
	cool_support_array[i] = a_to_store_num[i];
}

for(i = x; i>=0; i--) {
	printf("%d ", cool_support_array[i]);
}
printf("\n");
	
	return cool_support_array;
}


int 
main(void) {
	
	int n_test;	
	scanf("%d", &n_test);

for(int z=0; z < n_test; z++) { 
	reverse_me();
}

}
