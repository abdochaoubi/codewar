#include <stdio.h>

// "Preloaded Code" (do NOT modify!)
typedef struct node {
  int data;
  struct node *next;
} Node;

// Main Solution
char *stringify(Node *list) {
    const struct node  *tst = list;
  if(tst==NULL) return "NULL";
  char* str=malloc(1500);
  sprintf(str,"%d",tst->data);
  tst = tst->next;
  while(tst!=NULL){
    sprintf(str,"%s -> %d",str,tst->data);
    tst = tst->next;
  }
  sprintf(str,"%s -> NULL",str);
  return str;
}
