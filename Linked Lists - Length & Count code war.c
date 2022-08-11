#include <stddef.h>


struct Node {
  struct Node *next;
  int value;
};
// returns the length of the list
size_t list_length (const struct Node *list)
{
  const struct Node *tst = list;
  int i=0;
  while(tst!=NULL){
    i++;
    tst = tst->next;
  }
  
  return i;
}
// returns the number of occurences of search_val in list
size_t list_count (const struct Node *list, int search_val)
{
   const struct Node *tst = list;
  int i=0;
  while(tst!=NULL){
    if(tst->value == search_val){
     i++; 
    }
    tst = tst->next;
  }
  
  return i;
  return 0;
}
