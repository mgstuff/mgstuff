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
  tab = (int*)realloc(tab, (z+1)* sizeof(int));
  printf ("Realloced\n");
} while(tmp != '\n');

printf("here\n");
for(int i=z-1; i>-1; i--) {
  printf("%d ", tab[i]);
}

free(tab);

  return 0;
}
