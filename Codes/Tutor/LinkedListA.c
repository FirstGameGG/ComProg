#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

int main(){
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    Node *node = n1;
    while (node != NULL){
        printf("%d ", node->data);
        node = node->next;
    }

}