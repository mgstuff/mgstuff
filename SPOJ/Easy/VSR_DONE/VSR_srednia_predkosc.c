/*
 * Michal Grycki
 * VSR - Srednia Predkosc
*/


#include <stdio.h>
#include <stdlib.h>

/* Formula for average speed is
 * V = 2*v2*v1 / v1+v2
*/


int 
calculate_average() {

	int speed_first;
	int speed_second;
	int average_speed;

	scanf("%d %d", &speed_first, &speed_second);
	average_speed = (2 * speed_second * speed_first)/(speed_first + speed_second);

	return average_speed;
}
int 
main(void) {

	int n_of_tests;
	int average_result;

do {
	scanf("%d", &n_of_tests);
} while(n_of_tests < 1 || n_of_tests > 1000);

for(int i=0; i<n_of_tests; i++) {
	average_result = calculate_average();
	printf("%d", average_result);
	printf("\n");
}

return 0;
}
