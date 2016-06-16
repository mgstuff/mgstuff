/*
 * Michal Grycki
 * PRZEDSZK - Przedszkolanka
*/

#include <stdio.h>
#include <stdlib.h>

int
nwd(int l_first, int l_second) {

int res;

while(l_second != 0) {
	res = l_second;
	l_second = l_first%l_second;
      	l_first = res; 
}

	return l_first;

}

/*
int 
nww(int l_first,int l_second,int nwd_res) {

int nww;


nww = (l_first/nwd_res)*l_second;


return nww;
}

*/

int 
main(void) {

int l_test;
//int result_of_nwd;
int result_of_nww;
int l_one = 0;
int l_second = 0;

scanf("%d", &l_test);

for(int i=0; i<l_test; i++) {
	do {
		scanf("%d %d", &l_one, &l_second);
	} while(l_one<10 || l_second>30);
	result_of_nww = (l_one/nwd(l_one,l_second)) *l_second;
	//result_of_nww = nww(l_one,l_second,result_of_nwd);
	printf("%d\n", result_of_nww);
}

return 0;
}
