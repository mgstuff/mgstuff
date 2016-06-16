#include <stdio.h>
#include <stdlib.h>


void 
go_south_east(int* lat,int* lon) {

	*lat = *lat - 1;
	*lan = *lan +1;


}



int 
main(void) {

int latitude = 32;
int longitude = -64;

go_south_east(&latitude,&longitude );
printf("%d\t%d", latitude, longitude);


return 0;
}
