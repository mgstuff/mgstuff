#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct car_rent {
  int *price;
  char *name;
  char *mark;

  /* Wskaznik na kolejny element tego samego typu
   * i o tych samych polach
  */
  struct car_rent *next;

} car_rent;

//Inicjalizacja pustej listy z jednym elemente(home_node)
/* Podajac do funkcji wskaznik na strukture
 * - Mozemy modyfikowac wartosci i beda one widoczne poza funkcja
     dla okreslonej zmiennej danego typu strukturalnego
     ->
*/
void init(car_rent *start_node) {
  start_node->next = NULL;
}

car_rent* create(char *name)
{
  car_rent *i = malloc(sizeof(car_rent));
  i->name = strdup(name);
  i->price = 100;
  i->mark = "Best";
  i->next = NULL;

  return i;
}

int
main(void) {

  //Utworzonie nowej zmiennej typu car_rent
  car_rent bmw = {123, "M3", "Turbo", NULL};
  value *next = NULL;
  /* Do naszej listy wysylamy pierwszy element ktory zainicjalizuje
   * pusta liste, tzn bez kolejnego elementu
  */
  car_rent *start = NULL;
  car_rent *i = NULL;
  car_rent *next = NULL;
  char name[80];


  return 0;
}
