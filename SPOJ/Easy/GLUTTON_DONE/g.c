#include <stdio.h>
#include <stdlib.h>




void
* how_long(int *n, int *m) {

  const int hour = 86400;
  //I must malloc memory for int if i want to return it from function
  int *sum = malloc(sizeof(int));
  int sec = 0;
  int loop = *n;
  *sum = 0;

  for(;loop>=1; loop--) {

    scanf("%d", &sec);
    *sum += hour/sec;
  }

  if(*sum % *m ==0) {
    printf("%d\n", *sum/ *m);
  } else {
    printf("%d\n", *sum/ *m+1);
  }


return sum;
free(sum);

}

int
main(void) {

  int t;
  scanf("%d", &t);

  int *res;
  int n;
  int m;

for(int i=0; i<t; i++) {
  n,m = 0;
do {
    scanf("%d %d", &n, &m);
} while(n<1 || n>10000 || m<1 || m>1000000000);
  how_long(&n,&m);
}
  return 0;
}
