#include <stdio.h>
#include <stdlib.h>

void insertFront(struct Node* head, int newValue);
void insertEnd(struct Node* head, int newValue);
void insertAtPos(struct Node* head, int newValue, int pos);

struct Node {
    int value;
    struct Node* next;
};

int main()
{

    return 0;
}

void insertFront(struct Node* head, int newValue) {
    // create the new node
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = newValue;

    // create a pointer to the current first node
    struct Node* firstNode = head->next;

    // make the head point to the new node
    head->next = newNode;

    // make the new node point to the previously first node
    newNode->next = firstNode;
}

void insertEnd(struct Node* head, int newValue) {
    // create the new node
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = newValue;

    // we create a pointer to the head
    struct Node* current = head;

    // we traverse through the list until we reach
    // the last element of the list
    while (current->next != NULL) {
        current = current->next;
    }

    // we make the last node point to the new node
    current->next = newNode;
}

void insertAtPos(struct Node* head, int newValue, int pos) {
    // create the new node
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = newValue;

    // we create a pointer to the head
    struct Node* current = head;

    // we go to the position where we will insert
    // the new node
    int i = 0;
    while (i < pos && current != NULL) {
        current = current->next;
        i++;
    }

    // we insert the new node
    if (current != NULL) {
        struct Node* temp = current-> next;
        current->next = newNode;
        newNode->next = temp;
    }
}

