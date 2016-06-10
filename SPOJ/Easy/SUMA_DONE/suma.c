/*
 * Michal Grycki
 * SUMA - Suma
*/

#include <stdlib.h>
#include <stdio.h>


int
sum_me() {

	int n_to_add = 0;
	int result = 0;
	
//While user enter values
while(scanf("%d", &n_to_add) != EOF) {
	result += n_to_add;
	printf("%d\n",result);
}

return result;

}


int 
main(void) {
	sum_me();

return 0;
}
