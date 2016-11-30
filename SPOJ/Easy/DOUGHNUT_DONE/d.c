#include <stdlib.h>
#include <stdio.h>

typedef struct harry {
  int c;
  int k;
  int w;

} harry;


void
take_on(harry h){
  scanf("%d%d%d", &h.c, &h.k, &h.w);
  if(h.c * h.w > h.k)
  {
    printf("no\n");
  }
  else
  {
    printf("yes\n");
  }

}

int
main(void) {
  int t;
  scanf("%d", &t);
  harry h;

  for(int i=0; i<t; i++)
  {
    take_on(h);
  }
  return 0;
}
