/*
 * Michal Grycki
 * PP00602A - Parzysta Nieparzyste
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void) {

	char tmp;
	int t;
	int n_of_numbers;
	int num_to_arr;


scanf("%d", &t);

for(int f=0; f<t; f++)
{
	n_of_numbers = 0;
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




	for(int j=0; j<n_of_numbers; j++)
	{
		if(j%2 !=0)
		{
			printf("%d ",tab[j]);
		}
	}


	for(int j=0; j<n_of_numbers; j++)
	{
		if(j%2 == 0)
		{
			printf("%d ",tab[j]);
		}
	}

	printf("\n");
}


return 0;
}
