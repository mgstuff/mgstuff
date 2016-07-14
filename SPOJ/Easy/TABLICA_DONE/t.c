#include <stdio.h>
#include <stdlib.h>



int
main(void) {

int i;
int z = 0;
char tmp;
int *tab = malloc(sizeof(int));

do {
  scanf("%d%c", &i, &tmp);
  tab[z] = i;
  z++;
} while(tmp != '\n');


for(int i=z-1; i>-1; i--) {
  printf("%d ", tab[i]);
}

  return 0;
}
