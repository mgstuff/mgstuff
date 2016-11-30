/*
 * Michal Grycki
 * FCTRL3 - Dwie cyfry silni
*/

#include <stdio.h>
#include <stdlib.h>


// working but tooooo slow
int
get_silnia(int n_to_cal) {

	if(n_to_cal < 2) {
		return 1;
	}

return n_to_cal*get_silnia(n_to_cal-1);	
}




int 
main(void) {
	int n_tests;
	//int result;
	int n_to_cal;
	//int n_d;
	//int n_j;

	scanf("%d", &n_tests);
	
for(int z=0; z<n_tests; z++) {
	scanf("%d", &n_to_cal);
	//result = get_silnia(n_to_cal);
	//n_d = (result%100)/10;
	//n_j = result%10;
	printf("%d %d", (get_silnia(n_to_cal)%100)/10, get_silnia(n_to_cal)%10);
	printf("\n");
}
}
