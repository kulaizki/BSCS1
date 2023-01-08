#include <stdio.h>
#include <stdlib.h>

void insertFront(struct Node* head, int newValue);
void insertEnd(struct Node* head, int newValue);

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

}

