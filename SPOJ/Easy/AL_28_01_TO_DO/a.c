#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int
main(void) {

  char *f = malloc(sizeof(char));
  int N;
  int k = 1;
  int b=4;
  char *s;
do {
  scanf("%d\n", &N);
} while(N % 2 == 0);

f = realloc(f, sizeof(char) * N);
f = fgets(f,N+1,stdin);

printf("%c\n",f[b]);
printf("%c%c%c\n",f[b-1], f[b], f[b+1]);

for(int i=0; i<N/2+1;i++)
{
  printf("%c",f[b]);
}

free(f);


}
