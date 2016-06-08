/*
 * Michal Grycki
 * POSTAM - Samolot
*/

#include <stdio.h>
#include <stdlib.h>

void count_places() {
	int n1, k1, n2, k2;
	int sum;
	
	do{
		scanf("%d %d %d %d", &n1, &k1, &n2, &k2);
	} while((!(n1 >= 1)) || k2 > 1000);
	
	sum = (n1*k1) + (n2 * k2);
	printf("%d", sum);

}


int main(void) {

	count_places();
return 0;
}
