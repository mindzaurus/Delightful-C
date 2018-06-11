#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int val;
  struct _node * next; // self referential pointer of same type node
} node;


int main()
{
  node * first_node = (node *) malloc (sizeof(node));
  first_node->val = 100;

  first_node->next = (node *) malloc (sizeof(node));
  first_node->next->val = 200;
  first_node->next->next = NULL;

  {
    node * ptr = first_node;
    printf("node at ptr %p \n\t\thas val %d val and points to next node ptr->next %p\n",
      ptr, ptr->val, ptr->next);

    ptr = ptr->next;
    printf("\nnode at ptr %p \n\t\thas val %d val and points to next node ptr->next %p\n",
      ptr, ptr->val, ptr->next);
  }
}


//
