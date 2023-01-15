#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int value;
    struct Node* next;
};

void display(struct Node* head);
void insertFront(struct Node* head, int val);
void insertEnd(struct Node* head, int val);
void insertAtPos(struct Node*head, int val, int pos);
bool search(struct Node* head, int val);
void deleteFront(struct Node* head);
void deleteEnd(struct Node* head);
void deleteAtPos(struct Node* head, int pos);
void freeList(struct Node* head);

int main()
{

    return 0;
}

void display(struct Node* head) {
    struct Node* current = head->next;

    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

void insertFront(struct Node* head, int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = val;

    struct Node* firstNode = head->next;

    head->next = newNode;

    newNode->next = firstNode;
}

void insertEnd(struct Node* head, int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = val;
    newNode->next = NULL;

    struct Node* current = head;

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtPos(struct Node* head, int val, int pos) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = val;

    struct Node* current = head;

    int i = 0;
    while (i < pos && current != NULL) {
        current = current->next;
        i++;
    }

    if (current != NULL) {
        struct Node* temp = current-> next;
        current->next = newNode;
        newNode->next = temp;
    }
}

bool exists(struct Node* head, int val) {
    bool flag = false;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->value == val) {
            flag = true;
            break;
        }

        current = current->next;
    }
    return flag;
}

void deleteFront(struct Node* head) {
    // create a pointer to the current first node
    struct Node* firstNode = head->next;

    if (firstNode != NULL) {
        // make the head point to the node printed
        // to by the first node
        head->next = firstNode->next;

        // delete the first node
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
    struct Node* current = head;

    int i = 0;
    while (i < pos && current != NULL) {
        current = current->next;
        i++;
    }

    if (current != NULL) {
        struct Node* temp = current->next;
        current->next = temp->next;

        free (temp);
    }
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}