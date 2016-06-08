/*
 * Michal Grycki
 * PP0501A - NWD
*/


#include <stdio.h>
#include <stdlib.h>


int 
nwd(int a, int b) {

	if(b!=0)
		return nwd(b,a%b);

	return a;
}

int 
main(void) {
	
	int i = 0;
	int t = 0;
	int a = 0;
	int b = 0;
	scanf("%d", &t);
	int tab[t];

for(i=0; i<t; i++) {	
	
	scanf("%d %d", &a, &b);
	tab[i] = nwd(a,b);
}

for(i=0; i<t; i++) {
	printf("%d\n", tab[i]);
}
	return 0;
}
