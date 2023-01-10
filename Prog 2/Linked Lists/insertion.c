#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

void display(struct Node* head);
void insertFront(struct Node* head, int newValue);
void insertEnd(struct Node* head, int newValue);
void insertAtPos(struct Node* head, int newValue, int pos);

int main()
{
   struct Node* head = (struct Node*) malloc(sizeof(struct Node));

    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node));
    node1-> value = 7;
    head->next = node1;

    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));
    node2->value = 14;
    node1->next = node2;

    struct Node* node3 = (struct Node*) malloc(sizeof(struct Node));
    node3->value = 21;
    node2->next = node3;

    node3->next = NULL;

    printf("Initial list: ");
    display(head);

    printf("\ninsertFront: ");
    insertFront(head, 4);
    display(head);

    printf("\ninsertEnd: ");
    insertEnd(head, 24);
    display(head);

    printf("\ninsertAtPos: ");
    insertAtPos(head, 99, 1);
    display(head);

    return 0;
}

void display(struct Node* head) {
    struct Node* current = head->next;

    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
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
    newNode->next = NULL;

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

