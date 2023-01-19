// NOT YET FINAL

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int value);
void display(struct Node* head);
void insertFront(struct Node* head, int val);
void insertEnd(struct Node* head, int val);
void insertAtPos(struct Node*head, int val, int pos);
void deleteFront(struct Node* head);
void deleteEnd(struct Node* head);
void deleteAtPos(struct Node* head, int pos);
bool search(struct Node* head, int val);
void freeList(struct Node* head);

int main()
{
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));

    struct Node* node1 = createNode(1);
    head->next = node1;
    struct Node* node2 = createNode(2);
    node1->next = node2;
    struct Node* node3 = createNode(3);
    node2->next = node3;
    struct Node* node4 = createNode(4);
    node3->next = node4;
    struct Node* node5 = createNode(5);
    node4->next = node5;
    struct Node* node6 = createNode(6);
    node5->next = node6;
    struct Node* node7 = createNode(7);
    node6->next = node7;

    printf("Initial list: "); display(head);

    insertFront(head, 0);
    printf("\nInserted \"0\" to front: "); display(head);

    insertEnd(head, 9);
    printf("\nInserted \"9\" to end: "); display(head);

    insertAtPos(head, 8, 8);
    printf("\nInserted \"8\" into position 8: "); display(head);

    deleteFront(head);
    printf("\nDeleted front: "); display(head);

    deleteEnd(head);
    printf("\nDeleted end: "); display(head);

    deleteAtPos(head, 4);
    printf("\nDeleted value in position 4: "); display(head);

    int num1 = 4, num2 = 7;
    printf("\nNumbers to be searched: 4 and 7");
    search(head, 4) 
        ? printf("\n4 is in the list") 
        : printf("\n4 is not in the list");
    search(head, 7)
        ? printf("\n7 is in the list") 
        : printf("\n7 is not in the list"); 

    freeList(head);

    return 0;
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* head) {
    struct Node* current = head->next;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

void insertFront(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    struct Node* firstNode = head->next;
    head->next = newNode;
    newNode->next = firstNode;
}

void insertEnd(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    struct Node* current = head->next;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtPos(struct Node*head, int val, int pos) {
    struct Node* newNode = createNode(val);
    struct Node* current = head->next;

    int i = 1;
    while (i < pos && current != NULL) {
        current = current->next;
        i++;
    }

    if (current != NULL) {
        struct Node* temp = current->next;
        current->next = newNode;
        newNode->next = temp;
    }
}

void deleteFront(struct Node* head) {
    struct Node* firstNode = head->next;
    if (firstNode != NULL) {
        head->next = firstNode->next;
        free(firstNode);
    }
}

void deleteEnd(struct Node* head) {
    struct Node* prev = head;
    struct Node* current = head->next;
    if (current != NULL) {
        while (current->next != NULL) {
            prev = prev->next;
            current = current->next;
        }
        free(current);
        prev->next = NULL;
    }
}

void deleteAtPos(struct Node* head, int pos) {
    struct Node* current = head->next;
    int i = 1;
    while (i < pos-1 && current != NULL) {
        current = current->next;
        i++;
    }

    if (current != NULL) {
        struct Node* temp = current->next;
        current->next = temp->next;
        free(temp);
    }
}

bool search(struct Node* head, int val) {
    struct Node* current = head->next;
    while (current != NULL) {
        if (current->value == val) {
            return true;
        }
        current = current->next;  
    }
    return false;
}

void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}