/*
 * Michal Grycki
 * PP00602A - Parzysta Nieparzyste
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dummy_one()
{
	char tmp;
	int n_of_numbelrs;
	int num_to_arr;

	scanf("%d", &n_of_numbers);

	int tab[n_of_numbers];
	int i = 0;

	do {
		scanf("%d%c", &num_to_arr, &tmp);
		tab[i] = num_to_arr;
		i++;
		if(i == n_of_numbers) {
			break;
		}
	} while( tmp != '\n');

	int size = sizeof(tab)/sizeof(tab[0]);

	for(int i=0; i<size; i++)
	{
		if(size % i == 0) {
			printf("%d", tab[i]);
		}
	}

	for(int i=0; i<size; i++)
	{
		if(size % i != 0) {
			printf("%d", tab[i]);
		}
	}



	printf("\n");

}


/*
void
get_even(int *a_tab, int n_of_numbers) {

	int *e_tab;
	e_tab = (int*)malloc(n_of_numbers * sizeof(int));
	//e_tab = (int*)calloc(n_of_numbers, sizeof(int));
	int j = 0;
	for(int i=0; i<n_of_numbers; i++) {
		if(a_tab[i] % 2 ==0) {
			e_tab[j] = a_tab[i];
			j++;
			//e_tab = realloc(e_tab, j);
		}
	}
	for(int i=0; i<j; i++)
	{
		printf("%d", e_tab[i]);
	}

	free(e_tab);
}


void
get_odd(int *a_tab, int n_of_numbers) {
	int *o_tab;
	o_tab = (int*)malloc(n_of_numbers * sizeof(int));
	int j=0;
	for(int i=0; i<n_of_numbers; i++) {
		if(a_tab[i] % 2 != 0) {
			o_tab[j] = a_tab[i];
			j++;
			//o_tab = realloc(o_tab, j);
		}
	}
	for(int i=0; i<j; i++)
	{
		printf("%d", o_tab[i]);
	}
	free(o_tab);
}
*/

int
main(void) {

//	int n_of_numbers = 0;
//	int num_to_arr;
	int n_of_test = 0;

//	int i = 0;
//	char tmp;
//	int *a_tab;

	scanf("%d", &n_of_test);

for(int z=0; z<n_of_test; z++) {
	dummy_one();
}

/*
for(int z = 0; z<n_of_test; z++)
{
	n_of_numbers = 0;
	i = 0;
do {
	scanf("%d", &n_of_numbers);
}while(n_of_numbers >= 100);
	a_tab = (int*)malloc(n_of_numbers * sizeof(int));
//	a_tab = (int*)calloc(n_of_numbers, sizeof(int));
	do {
		scanf("%d%c", &num_to_arr, &tmp);
		a_tab[i] = num_to_arr;
		i++;
		if(i == n_of_numbers) {
			break;
		}l
	} while( tmp != '\n');

	get_even(a_tab, n_of_numbers);
	get_odd(a_tab, n_of_numbers);
	free(a_tab);
	printf("\n");

}
*/



return 0;
}
