#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

void sortList() {
    
}

void displayHeadToTail() {
    struct Node* current = head;

    printf("Head to tail: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void displayTailToHead() {
    struct Node* current = head;

    while (current->next != NULL) { current = current->next; }

    printf("Tail to head: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    insertAtHead(10);
    insertAtHead(20);
    insertAtTail(30);
    insertAtTail(40);

    displayHeadToTail();
    displayTailToHead();
    
    freeList(head);

    return 0;
}