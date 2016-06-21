

#include <stdio.h>
#include <stdlib.h>


void fill_arr();
void swap_arr(int *size,int *arr_to_get_values);




int
main(void) {

	int n_of_test;
	scanf("%d", &n_of_test);

for(int n_t=0; n_t<n_of_test; n_t++) {
	fill_arr();
}
return 0;
}

void 
fill_arr() {

	int how_many_num;
	int *arr_to_be_swapped;
	int num_to_arr;
	char tmp;
	int i = 0;
	
	scanf("%d", &how_many_num);	
	arr_to_be_swapped = (int*)calloc(how_many_num, sizeof(int));

	do {
		scanf("%d%c", &num_to_arr, &tmp);
		arr_to_be_swapped[i] = num_to_arr;
		i++;
		if(i == how_many_num) {
			break;
		}
	} while(tmp != '\n');

	swap_arr(&how_many_num, arr_to_be_swapped);

	free(arr_to_be_swapped);

}

void 
swap_arr(int *size, int *arr_to_get_values_from) {
	
	int *best_arr;
	best_arr = (int*)calloc(*size, sizeof(int));


	for(int j=1; j<*size; ++j) {
		best_arr[*size-1] = arr_to_get_values_from[0];
		best_arr[j-1] = arr_to_get_values_from[j];
	}

	for(int z=0; z<*size; z++) {
		printf("%d ", best_arr[z]);
	}
}




