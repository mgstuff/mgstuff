#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float tank_capacity;
	int tank_psi;
	const char *suit_material;
}equipment;


typedef struct scuba {
	const char *name;
	equipment kit;

}diver;

void
badge(diver d ) {

	printf("%f\n%d\n%s\n%s\n", d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material, d.name);

}


int
main(void) {

	diver randy = {"Rafal", {5.5, 3500, "neopren"}};
	badge(randy);



return 0;
}
