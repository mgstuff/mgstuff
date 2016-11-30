#include <stdlib.h>
#include <stdio.h>

int main(void) {


int n_1;
int n_2;
char tmp;
char temp;

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
