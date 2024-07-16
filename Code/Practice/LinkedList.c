#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Every node is pointer

struct __Node {
    int data;
    struct __Node *next;
};

typedef struct  __Node Node;
typedef Node* List;

void insert(List *list, int value){
    List node = (List) malloc( sizeof(node));
    node->data = value;
    node->next = NULL;

    if (*list == NULL){
        *list = node;
        return;
    }

    List current = *list;
    List prev = NULL;

    while (current != NULL) {
        prev = current;
        current = current->next;
    }
    prev -> next = node;
}; //append last

void print(List list){
    List current = list;

    while (current != NULL){
        printf("[%d]->",current->data);
        current = current->next;
    }
};

void printR(List list){
    if (list == NULL) return;
    printf("[%d]->",list->data);
    printR(list->next);
};


int main(){
    return 0;
    List head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 15);
    print(head);
    printR(head);
}