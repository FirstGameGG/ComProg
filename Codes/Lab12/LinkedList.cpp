#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node *head;

    LinkedList() {
        head = NULL;
    }

    void appendNode(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* node = head;
            while (node->next != NULL) {
                node = node->next;
            }
            node->next = newNode;
        }
    }

    void deleteNode(int data) {
        if (head == NULL) return;
        if (head->data == data) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node* node = head;
        while (node->next != NULL && node->next->data != data) {
            node = node->next;
        }
        if (node->next != NULL) {
            Node* toDelete = node->next;
            node->next = node->next->next;
            delete toDelete;
        }
    }

    void updateNode(int oldData, int newData) {
        Node* node = head;
        while (node != NULL) {
            if (node->data == oldData) {
                node->data = newData;
                return;
            }
            node = node->next;
        }
    }

    void printList() {
        for (Node* node = head; node != NULL; node = node->next) {
            cout << node->data << " ";
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(3);
    list.appendNode(4);
    list.printList();

    list.updateNode(1, 5);
    list.printList();

    list.deleteNode(3);
    list.printList();

    return 0;
}
