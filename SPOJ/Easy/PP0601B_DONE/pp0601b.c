#include <stdio.h>
#include <stdlib.h>

struct numbers {
	int t_number;
	int max_range;
	int div_on;
	int div_off;
	int *result;
	int res_i;
};





int 
main(void) {

	struct numbers n1_one;
	scanf("%d", &(n1_one.t_number));

for(int s=0; s<n1_one.t_number; s++) {
	
	n1_one.res_i = 0;
	n1_one.result = (int*)calloc(n1_one.res_i+1, sizeof(int));

	scanf("%i %i %i", &n1_one.max_range, &n1_one.div_on, &n1_one.div_off);
	//scanf("%d", &(n1_one.max_range));
	//scanf("%d", &(n1_one.div_on));
	//scanf("%d", &(n1_one.div_off));
	
	for(int ai=1; ai<n1_one.max_range; ai++) {
		if( (ai % n1_one.div_on == 0) && (ai % n1_one.div_off != 0) ) {
			n1_one.result[n1_one.res_i] = ai;
			++n1_one.res_i;
			n1_one.result = realloc(n1_one.result, n1_one.res_i);
		}
	}
	
	for(int z = 0; z<n1_one.res_i; z++) {
		printf("%d ", n1_one.result[z]);
	}
	printf("\n");
	free(n1_one.result);

}


return 0;
}
