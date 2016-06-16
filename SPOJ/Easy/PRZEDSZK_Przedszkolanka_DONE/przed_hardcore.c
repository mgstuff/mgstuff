/*
 * Michal Grycki
 * PRZEDSZK - Przedszkolanka
*/




#include <stdlib.h>
#include <stdio.h>



//recurentttt
void 
check_value(int *val_f, int *val_s) {

	*val_f=0;
	*val_s=0;

	scanf("%d %d", val_f, val_s);
	if(*val_f < 10 ||  *val_s >30) {
		check_value(val_f, val_s);
	}
	

}


int 
calc_am(int *val_f, int *val_s, int *result) {
	
	*result = *val_f * (*val_s%10);
	if(*result == 0) {
		*result = *val_f * ((*val_s%100)/10);
	}
return *result;
}

int main(void) {

int n_of_t = 0;
int grp_first = 0;
int grp_second = 0;
int amount = 0;

scanf("%d", &n_of_t);

for(int i=0; i<n_of_t; i++) {

	check_value(&grp_first, &grp_second);
	calc_am(&grp_first, &grp_second, &amount);
	printf("%d\n", amount);
}

return 0;
}
