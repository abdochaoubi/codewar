#include <stddef.h>

struct List {
	struct List *next;
	int data;
};

// return the nth node, or NULL if n >= length(list)
struct List *get_nth_node (const struct List *list, size_t n)
{
  const struct List  *tst = list;
  int i=0;
  while(tst != NULL){
    if(i == n) return tst;
    i++;
    tst = tst->next;
  }
	return 0;
}
