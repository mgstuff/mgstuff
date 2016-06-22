/*
 * Michal Grycki
 * POL - Polowa
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void 
cut_string()
{

	char **strarray = NULL;
	int i =0;
	int strcount = 0;
	char line[1024];


	while((fgets(line, 1024, stdin)) != NULL) {
		strarray = (char **)realloc(strarray, (strcount + 1) * sizeof(char *));
		strarray[strcount++] = strdup(line);
	}



	for(i=0; i<strcount; i++) {
		printf("strarray[%d] == %s", i, strarray[i]);
	}

	for(i=0; i<strcount; i++) {
		free(strarray[i]);
	}
	free(strarray);

}



void
super_string() 
{
	char tab[2000];
	char ch;
	int i = 0;
	
	while((ch = getchar()) != '\n') {
		tab[i++] = ch;
	}
	tab[i] = '\0';

	int j = i/2;
	i = 0;	
	while(tab[i] != '\0') {
		putchar(tab[i++]);
		if(i == j) {
			break;
		}
	}
	printf("\n");
	

}



int 
main(void) {

	//cut_string();
int n_test;

scanf("%d\n", &n_test);

for(int i=0; i<n_test; i++) {
	super_string();
}
return 0;
}
