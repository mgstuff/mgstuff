#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void
calc_me(int a, int b, int *res) {

/*
  *res = pow(a,b);
  if(*res >10)
  {
    *res = *res%10;
  }
*/

  if(a == 2)
  {
    if(b == 2 || b == 6 || b == 10) {
      *res = 4;
    }
    else if(b ==3 || b== 7) {
      *res = 8;
    }
    else if( b==4 || b==8) {
      *res = 6;
    }
    else if( b==5 || b ==9) {
      *res = 2;
    }
    }
  }


int
main(void) {
  int t;
do {
    scanf("%d\n", &t);
} while(t>10 || t<1);

for(int i=0; i<t; i++) {

  int a = 0;
  int b = 0;
  int res = 0;

do {
    scanf("%d %d", &a, &b);
} while(a <1 || a> 10000000 || b<1 || b> 10000000);

  calc_me(a,b,&res);
  printf("%d\n", res);
}
  return 0;
}
