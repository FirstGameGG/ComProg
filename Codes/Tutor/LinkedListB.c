#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

Node *createNode(int data){
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
}
void printList(Node *head){
    for (Node *node = head; node != NULL; node = node -> next){
    printf("%d ", node->data);
    } 
}

int main(){
    Node *n1 = createNode(1);
    Node *n2 = createNode(2);
    Node *n3 = createNode(3);

    n1->next = &n2;
    n2->next = &n3;
    n3->next = NULL;

    printList(n1);
    return 0;
}