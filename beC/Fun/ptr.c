#include <stdio.h>
#include <stdlib.h>


void 
go_south_east(int* lat,int* lon) {

	*lat = *lat - 1;
	*lon = *lon +1;


}



void 
B(int *worth) {

	*worth = *worth+1;;



}

int 
main(void) {

int latitude = 32;
int longitude = -64;

go_south_east(&latitude,&longitude );
printf("%d\t%d\n", latitude, longitude);

int z=4;
int f=8;
int *ptr;
int *d_ptr;

ptr = &z;
printf("%d\n", *ptr);

d_ptr = ptr;
printf("%d\n", *d_ptr);

z=f;

printf("%d\n", *ptr);
printf("%d\n", *d_ptr);


int networth = 55;
B(&networth);
printf("%d\n", networth);


return 0;
}
