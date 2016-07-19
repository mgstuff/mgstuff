#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int
main(void) {

  char *f = malloc(sizeof(char));
  int N;
  int k;
  char *s;
do {
  scanf("%d\n", &N);
} while(N % 2 == 0);

f = realloc(f, sizeof(char) * N);
f = fgets(f,N+1,stdin);

for(int i=0; i<N; i++){
  for(int j=0; j<N; j++){
    printf("%s",f);
  }
  printf("[%d]OUT\n", i);
}


printf("%s",f);




free(f);


}
