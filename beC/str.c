#include <stdio.h>
#include <stdlib.h>

typedef struct {

  const char *name;
  const char *species;
  int age;

} turtle;

//Using pointer to structure
void happy_bday(turtle *t) {
  //If we using pointer to structure, we must access field Using
  // struct->field
  t->age = t->age + 1;
  printf("\nINSIDE FUNCTION:\nhpday %s, now ur age is %d\n\n", t->name, t->age);
}

typedef struct{
  char *name;
  char *surname;
  char *from;
  int age;
  int id_num;
} player;

typedef struct {
  int salary;
  player help;

} trainer;

void
show_info_about_player(player *pl) {
  //printf("Name:\t%s\nSurname:\t%s\nFrom:\t%s\nAge:\t%d\nId_nume:\t%d\n", pl->name, pl->surname, pl->from, pl->age, pl->id_num);
  pl->name = "Jednak";
  pl->surname = "Inaczej";

}



int
main(void) {
  player cr;
  cr.name = "Cri";
  cr.surname = "Ron";
  cr.from = "PL";
  cr.age = 21;
  cr.id_num = 321123;

  player ms = {"Me","Le", "ARG", 33, 13231};
  trainer jm;

  jm.help.name = "Jos";

  printf("Values before entering a function to edit\n\n");
  printf("Name:\t%s\nSurname:\t%s\nFrom:\t%s\nAge:\t%d\nId_nume:\t%d\n", cr.name, cr.surname, cr.from, cr.age, cr.id_num);
  printf("\n\nValue after\n\n");
  show_info_about_player(&cr);
  printf("Name:\t%s\nSurname:\t%s\nFrom:\t%s\nAge:\t%d\nId_nume:\t%d\n", cr.name, cr.surname, cr.from, cr.age, cr.id_num);
  printf("\n\n\n");

  trainer ca = {.help.name = "Carl", .help.surname = "Anc", .help.from = "IT"};




  return 0;
}
