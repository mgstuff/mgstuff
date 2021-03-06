#include <stdio.h>
#include <stdlib.h>



struct cList
{
  int letter;
  struct cList *next;
};

struct cList *head = NULL;
struct cList *curr = NULL; //curr jest to wezel pomocny
struct cList *node = NULL; //Node jest aktualnym wezlem


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
  node = (struct cList*)malloc(sizeof(struct cList)); //alokacja pamieci dla nowego elementu
  node->letter = letter; //Przypisanie wartosci dla pola letter ze struktury cList dla zmiennej strukturalnej node
  node->next = NULL; //Nastepnik jest NULL'em

  curr->next = node; // Nastepnik wezla curr posiada teraz te same wlasciwosci co node
  curr = node; //curr staje sie node

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


void find_elem(int lettere)
{
  struct cList *temp;
  temp = head;


do{
  temp=temp->next;
  if(temp->letter == lettere)
  {
    printf("i found you >>\t%d\n", temp->letter);
  }
} while(temp->letter != lettere);

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
  //Wstawienie X elementow do listy
  add_item(2);
  add_item(3);
  add_item(4);
  //Usuniecie elemenetu o wartosci k2
  delete_item(2);
  //Wyszukanie elemenetu
  find_elem(3);
  //Print from head
  print_all(head);


    return 0;
}
