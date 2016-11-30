#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void
cipher_me()
{

  char c;

/* Lesson comming from this task is how to continously load string in C */

while(scanf("%1c", &c) != EOF)
{
    if(c == 'X')
    {
      c = 'A';
    }
    else if(c == 'Y')
    {
      c = 'B';
    }
    else if(c == 'Z')
    {
      c = 'C';
    }
    else if(c == 32)
    {
      c = 32;
    }
    else
    {
      c = c + 3;
    }
    printf("%c", c);
}


}

int
main(void)
{
  cipher_me();

  return 0;
}
