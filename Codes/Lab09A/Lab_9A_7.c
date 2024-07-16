#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int item;
  struct nodeType *next;
} Node;


void add(Node **list, int value){
   Node *node = (Node *) malloc(sizeof(Node));
    node->item = value;
    node->next = *list;
    *list = node;
}

void print(Node **list) {
    for (int i = 0; i < SIZE; i++ ){
        printf("KEY %2d: ",i);
        Node *current = list[i];
        while (current != NULL) {
            printf("%d ", current->item);
            current = current->next;
        }
        printf("\n");
    }
}


int main(){
    Node *key[SIZE] = {NULL};
    char command;
    int value;
    char input[100];

    while (1){
        printf("input> ");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%c%d", &command, &value) == 2) {
            if (command == 'a'){
                int i = value % SIZE;
                add(&key[i], value);
            }
        } else if (sscanf(input, "%c", &command) == 1) {
            if (command == 'q') break;
            else if (command == 'p') print(key);
        }
    }
}