#include <stdio.h>
#include <stdlib.h>

struct __Node {
    int value;
    struct __Node *next;
};

typedef struct __Node node;

node* createNode(int n){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->value =  n;
    newNode->next = NULL;
    return newNode;
}
void printList(node *pList) {
    while (pList != NULL){
        printf("%d ", pList->value);
        pList = pList-> next;
    }   
}

void insertNode(node **pList, int value) {
    node *newNode = createNode(value);

    if (*pList == NULL){
        *pList = newNode;
        return;
        }
    node *node = *pList;

    while (node != NULL){
        if (node->next == NULL){
            node->next = newNode;
            break;
        }
        node = node->next;
    }
}

void deleteNode(node **pList, int value){
    //Step 1 Find the node to delete
    node *prev = NULL;
    node *target = *pList;

    while(target != NULL){
        if (target->value == value) break;
        prev = target;
        target = target->next;
    }

    //Step 2 Check node exist
    if (target == NULL) return;

    //Step 3 Delete the node
    //Case 1 Delete First node
    if (target == *pList){
        *pList = target->next;
        free(target);
    }

    //Case 2 delete the last or middle node
    prev->next = target->next;
    free(target);
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