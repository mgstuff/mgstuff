#include <stdio.h>
#include <stdlib.h>


void
calc_me() {
  int a,b = 0;
  int sum;
  scanf("%d%d", &a, &b);

  if(a == b) {
    sum = a+b;
  }

do{
  if(a < b)
  {
    b -= a;
  }
  if(b < a)
  {
    a -= b;
  }
} while (a != b);

sum = a+b;

printf("%d\n", sum);
}


int
main(void) {


int t;

scanf("%d", &t);

for(int i=0; i<t; i++) {
  calc_me();
}


  return 0;
}
