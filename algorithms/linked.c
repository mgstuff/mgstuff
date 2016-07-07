#include <stdlib.h>
#include <stdio.h>


typedef struct island {
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;

void
display(island *start)
{
  island *i = start;
  for(; i != NULL; i = i->next) {
    printf("Nazwa: %s, open in %s - %s\n", i->name, i->opens, i->closes);
  }
}

int
main(void) {

  island iceland = {"islandia", "All Day", "Nigdy", NULL};
  island greenland = {"prowyspa", "Nigdy", "All Day", NULL};
  island piekna = {"wyspapro", "Jutro", "Wczoraj", NULL};

  island kol = {"res", "gres", "mes", NULL};

  iceland.next = &greenland;
  greenland.next = &piekna;
  piekna.next = &kol;

  display(&iceland);



  return 0;
}
