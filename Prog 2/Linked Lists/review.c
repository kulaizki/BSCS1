#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;

struct Node* createNote(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertFront(struct Node** head, int value) {
    struct Node* newNode = createNote(value);
    if (*head != NULL) { newNode->next = *head; }
    *head = newNode;
}

void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNote(value);
    struct Node* current = *head;

    while (current->next != NULL) {
        current = current->next;
    } 

    current->next = newNode;
}

void insertAtPosition(struct Node** head, int position, int value) {
    struct Node* newNode = createNote(value);
    int index = 0;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (index < position-1 && current != NULL) {
        current = current->next;
        index++;
    }

    // in progress
    newNode->next = current->next;
    if (*head != NULL) { current = newNode; }
    current->next = newNode;
}

void sortList(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        printf("List is empty\n");
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

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* current = head;
    printf("Current list: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
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
    insertFront(&head, 51);
    insertFront(&head, 21);
    insertFront(&head, 99);

    insertEnd(&head, 199);
    insertEnd(&head, 1);

    insertAtPosition(&head, 0, 0);
    insertAtPosition(&head, 3, 88);

    displayList(head);
    
    sortList(head);
    displayList(head);

    freeList(head);
}