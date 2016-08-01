#include <stdio.h>
#include <stdlib.h>



struct cList
{
  int letter;
  struct cList *next;
};

struct cList *head = NULL;
struct cList *curr = NULL;
struct cList *node = NULL; //Node bedzie moim ostatnim i na koncu bedzie nullem;


struct cList* create_list(int letter)
{
  node = (struct cList*)malloc(sizeof(struct cList));

  /*Czyli nasz aktualnie zaalokowany note i jego pole 'letter' do niego przypisujemy przekazany w parametrze 'letter'*/
  node->letter = letter;
  node->next = NULL;

  return node;

}


struct cList* add_item(int letter) //Ta funkcja powinna przyjmowac tez letter
{
  node = (struct cList*)malloc(sizeof(struct cList));
  node->letter = letter;
  node->next = NULL;

  curr->next = node;
  curr = node;

  return node;
}

int delete_item(int letter)
{
  struct cList *temp, *prev; //Wskaznik na element tymczasowy i poprzedni
  temp = head; // element tymczasowy jest zapisany na head

  while(temp != NULL) //dopoki temp(head) jest nullem to przechodzimy przez liste
  {
    if(temp->letter == letter) //Jezeli temp(head)->letter(czyli przekazany parametr, jakas liczba jest rowna naszemu poszukiwanemu) to wchodzimy
    {
      if(temp == head) // Jezeli mamy usunac head'a tzn, jezeli mamy usunac element na samym przodzie listy
      {
        head=head->next;
        free(temp); // zawsze zwalaniamy temp bo jest to jedynie element tymczasowy potrzebny nam tylko i wylacznie w obrebie tej funkji
        printf("BYLEM TU I USUWALEM POCZATEK LISTY\n");
        return 1;
      }
      else // W przeciwnym wypadku usuwamy konkretny element
      {
        prev->next=temp->next;
        free(temp);
        printf("BYLEM I USUWALEM JAKIS ELEMENT\n");
        return 1;
      }
    }
    else
    {
      prev=temp;
      temp=temp->next;
    }
  }

  return 0;

}



void print_all(struct cList *head) {
  node = head;

  while(node != NULL)
  {
    printf("%d\n", node->letter);
    node = node->next;
  }
  /* code */
}


int
main(void)
{

  /*Pamiec trzeba alokowac dla kazdej kolejnej zmiennej ktora bedzie brana pod uwage i beda do niej przypisywane wartosci*/

  //Inicjalizacja listy
  head = curr = create_list(1);
  add_item(2);
  add_item(3);
  add_item(4);
  add_item(5);
  add_item(6);
  delete_item(1);
  delete_item(2);
  print_all(head);




    return 0;
}
