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

void appendNode(Node **head, int data){
    //Step 1 Create new Node
    Node *newNode = createNode(data);
    //Step 2 Append new Node
    //Case list is empty
    if (*head == NULL){
        *head = newNode;
        return;
    }

    //Case list is not empty
    Node *node = *head;
    while (node != NULL){
        if (node->next ==NULL){
            node->next = newNode;
            return;
        }
    }
}

void deleteNode (Node **head, int data){
    //Step 1 Find the node to delete
    Node *prev = NULL;
    Node *target = *head;

    while(target != NULL){
        if (target->data == data) break;
        prev = target;
        target = target->next;
    }

    //Step 2 Check node exist
    if (target == NULL) return;

    //Step 3 Delete the node
    //Case 1 Delete First node
    if (target == *head){
        *head = target->next;
        free(target);
    }

    //Case 2 delete the last or middle node
    prev->next = target->next;
    free(target);
}

int main(){
    Node *list = NULL;
    appendNode(&list, 1);

}