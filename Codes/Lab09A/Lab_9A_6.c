#include<stdio.h>
#include<stdlib.h>

typedef struct __Node{
    int data;
    struct __Node *next;
}Node;

typedef Node* List;

void insert(List *list, int value){
    List node = (List) malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;

    if (*list == NULL || (*list)->data > value) {
        node->next = *list;
        *list = node;
    } else {
        List current = *list;
        while (current->next != NULL && current->next->data < value) {
            current = current->next;
        }
        node->next = current->next;
        current->next = node;
    }
}

void delete(List *list, int value) {
    List current, prev, temp;

    current = *list;
    prev = NULL;

    while (current != NULL) {
        if (current->data == value) {
            if (prev == NULL) {
                *list = current->next;
            } else {
                prev->next = current->next;
            }
            temp = current;
            current = current->next;
            free(temp);

            current = *list;
            prev = NULL;
        } 
        else {
            prev = current;
            current = current->next;
        }
    }
}

void print(List list) {
    List current = list;
    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
        }
    printf("]\n");
}
int main(){
    List head = NULL;
    char command;
    int value;
    char input[100];

    while (1){
    printf("input> ");
    fgets(input, sizeof(input), stdin);

    if (sscanf(input, "%c%d", &command, &value) == 2) {
        if (command == 'i') insert(&head, value);
        else if (command == 'd') delete(&head, value);        
    }
    else {
        if (command == 'q') break;
        else if (command == 'p') print(head);
        }
    }
}
