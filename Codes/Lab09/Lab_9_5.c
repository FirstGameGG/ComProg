#include <stdio.h>
#include <stdlib.h>

struct __Node{
    int data;
    struct __Node *next;
};

typedef struct __Node node;
typedef node* list;

void printList(node *pList) {
  while (pList != NULL) {
    printf("%d ", pList->data);
    pList = pList-> next;
  }
  printf("\n");
}

void insertNode(node **pList, int value) {
  list node = (list) malloc(sizeof(node));
  node->data = value;
  node->next = NULL;

  if (*pList == NULL || (*pList)->data >= node->data) {
    node->next = *pList;
    *pList = node;
    return;
  }

    list current = *pList;
    list prev = NULL;

    while (current->next != NULL && current->next->data < node->data) {
      current = current->next;
    }
    node->next = current->next;
    current->next = node;
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(&pList, value);
  }

  printList(pList);
}