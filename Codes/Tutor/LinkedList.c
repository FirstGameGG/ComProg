#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// HARD CODE
typedef struct node
{
    int data;
    struct node *next;

} Node;

int main(){
    Node n1;
    Node n2;
    Node n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    for (Node *node = &n1; node != NULL; node = node -> next){
        printf("%d ", node->data);
    }

}