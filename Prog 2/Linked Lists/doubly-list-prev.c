#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void displayTailToHead(struct Node* tail) {
    struct Node* current = tail->prev;
    while (current->prev != NULL) {
        printf("%d ", current->value);
        current = current->prev;
    }
}

int main()
{
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    head->prev = NULL;

    struct Node* node1 = createNode(1);
    head->next = node1;
    node1->prev = head;
    
    struct Node* node2 = createNode(2);
    node1->next = node2;
    node2->prev = node1;

    struct Node* node3 = createNode(3);
    node2->next = node3;
    node3->prev = node2;

    struct Node* tail = (struct Node*) malloc(sizeof(struct Node));
    node3->next = tail;
    tail->next = NULL;
    tail->prev = node3;
    
    displayTailToHead(tail);
}
