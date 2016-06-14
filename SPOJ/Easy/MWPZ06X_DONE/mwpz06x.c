/*
 * Michal Grycki
 * MWPZ06X - Nowa działka
*/




#include <stdio.h>
#include <stdlib.h>



int change_val(int *val) {


*val *= *val;

return *val;
}

int 
main(void)
{


int n_of_test = 0;
int val = 0;
int res = 0;

scanf("%d", &n_of_test);

for(int i=0; i<n_of_test; i++) {
	scanf("%d", &val);
	res = change_val(&val);
	printf("%d", res);
	printf("\n");
}

return 0;
}
