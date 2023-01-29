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

void insertAtPos(int value, int position) {
    struct Node* newNode = createNode(value);
    struct Node* current = head;
    int index = 0;

    if (position == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    while (index < position-1 && current != NULL) {
        current = current->next;
        index++;
    }

    newNode->next = current->next;
    newNode->prev = current;
    if (head != NULL) { current->next->prev = newNode; }
    current->next = newNode;
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
    printf("\nSorted in Ascending Order\n");
}

void sortListDescending() {
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
            if (node1->data < node2->data) {
                temp = node1->data;
                node1->data = node2->data;
                node2->data = temp;
            }
            node2 = node2->next;
        }
        node1 = node1->next;
    }
    printf("\nSorted in Descending Order\n");
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
    insertAtHead(7);
    insertAtHead(1);
    insertAtHead(6);
    insertAtHead(9);
    printf("Current list\n"); displayHeadToTail();

    insertAtPos(2, 3);
    printf("\nInserted 2 in position 3\n"); displayHeadToTail();
    insertAtPos(0, 0);
    printf("\nInserted 0 in position 0\n"); displayHeadToTail();
    displayTailToHead();
    
    sortListAscending(); 
    displayHeadToTail(); displayTailToHead();

    sortListDescending();
    displayHeadToTail(); displayTailToHead();

    freeList(head);

    return 0;
}