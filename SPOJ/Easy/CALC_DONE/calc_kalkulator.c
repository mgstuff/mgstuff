#include <stdlib.h>
#include <stdio.h>


void
calc(char letter, int v1, int v2){

int main(void) {


int n_1;
int n_2;
char tmp;
char temp;
char x;

for(int i=0;i<100;i++) {
	do{
	scanf("%c%d%d%c", &tmp, &n_1, &n_2, &temp);
	switch(tmp) {
		case '+':
			printf("%d", n_1+n_2);
			break;
		case '-':
			printf("%d", n_1-n_2);
			break;
		
		case '*':
			printf("%d", n_1*n_2);
			break;
		case '/':
			printf("%d", n_1/n_2);
			break;
		case '%':
			printf("%d", n_1%n_2);
			break;
		}
	printf("\n");
	} while(temp != '\n');
}

return 0;

}
