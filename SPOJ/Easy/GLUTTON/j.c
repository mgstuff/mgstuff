#include <stdio.h>
#include <stdlib.h>
#include <math.h>





int
main(void)
{
  int t; //testy
  double m = 0;
  double n = 0;
  double sec  = 0;
  double sum = 0;
  double hour = 86400;

  scanf("%d", &t);

for(int i=0; i<t; i++){
  n=0;
  m=0;
  sum = 0;
  sec = 0;
  scanf("%lf %lf", &n, &m);
  for(int j=0; j<n; j++) {
    scanf("%lf", &sec);
    sum += hour/sec;
    sec = 0;
  }

  if(fmod(sum,10) != 0) {
    if(fmod(sum,m)==0) {
      sum = sum/m;
    } else {
      sum = sum/m;
      sum += 1;
    }
  } else if(fmod(sum,10) == 0) {
    sum = sum/m;
  }
  printf("%1.lf\n", sum);
}


  return 0;
}
