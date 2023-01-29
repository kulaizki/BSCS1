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

void sortListAscending() {
    if (head == NULL || head->next == NULL) {
        printf("List does not have enough nodes to sort\n");
        return;
    }

    struct Node* node1;
    struct Node* node2;
    int temp;
    node1 = head;

    while (node1->next != NULL) {
        node2 = node1->next;
        while (node2 != NULL) {
            if (node1->data > node2->data) {
                temp = node1->data;
                node1->data = node2->data;
                node2->data = temp;
            }
            node2 = node2->next;
        }
        node1 = node1->next;
    }
}

void displayHeadToTail() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* current = head;

    printf("Head to tail: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void displayTailToHead() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

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
    insertAtHead(4);
    insertAtHead(9);
    insertAtTail(1);
    insertAtTail(3);
    displayHeadToTail(); displayTailToHead();

    printf("\nSorted\n");
    sortListAscending(); 
    displayHeadToTail(); displayTailToHead();
    
    
    freeList(head);

    return 0;
}