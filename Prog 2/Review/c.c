#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int data;
    struct node *link;
} *LinkedList;

void insertFront(LinkedList *head, int value);
void insertAtPos(LinkedList *head, int value, int pos);
void insertEnd(LinkedList *head, int value);
void deleteFront(LinkedList *head);
void deleteAtPos(LinkedList *head, int pos);
void deleteEnd(LinkedList *head);
void sortList(LinkedList *head);
void insertSorted(LinkedList *head, int value);
void displayList(LinkedList head);

int main() {

    LinkedList head = NULL;

    insertFront(&head, 1);
    insertFront(&head, 4);
    displayList(head);

    insertEnd(&head, 9);
    insertEnd(&head, 8);
    displayList(head);

    insertAtPos(&head, 5, 1);
    displayList(head);

    sortList(&head);
    displayList(head);

    insertSorted(&head, 6);
    displayList(head);

    deleteFront(&head);
    displayList(head);

    deleteEnd(&head);
    displayList(head);

    deleteAtPos(&head, 1);
    displayList(head);
}

void insertFront(LinkedList *head, int value) {
    
    LinkedList newNode = (LinkedList)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->link = *head;
    *head = newNode;
}

void insertAtPos(LinkedList *head, int value, int pos) {

    LinkedList newNode = (LinkedList)malloc(sizeof(struct node));
    newNode->data = value;

    LinkedList temp = *head;
    int x;
    for (x = 1; temp != NULL && x < pos; ++x, temp = temp->link) {}

    if (*head == NULL || pos == 1) {
        newNode->link = *head;
        *head = newNode;
    } else if (temp == NULL) {
            temp->link = newNode;
            newNode->link = NULL;
    } else {
        newNode->link = temp->link;
        temp->link = newNode;
    }
}

void insertEnd(LinkedList *head, int value) {

    LinkedList newNode = (LinkedList)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->link = NULL;

    LinkedList temp = *head;
    while (temp->link != NULL) {
        temp = temp->link;
    }

    temp->link = newNode;
}

void deleteFront(LinkedList *head) {

    LinkedList temp = *head;
    *head = (*head)->link;
    free(temp);
}

void deleteAtPos(LinkedList *head, int pos) {

    LinkedList temp = *head;
    
    if (pos == 1) {
        *head = (*head)->link;
        free(temp);
    } else {
        int x;
        for (x = 1; temp != NULL && x < pos; ++x, temp = temp->link) {}

        if (temp != NULL && temp->link != NULL) {
            LinkedList nextNode = temp->link;
            temp->link = nextNode->link;
            free(nextNode);
        }
    }
}

void deleteEnd(LinkedList *head) {

    if (*head == NULL) {
        return;
    } else if ((*head)->link == NULL) {
        free(*head);
        *head = NULL;
    } else {
        LinkedList temp = *head;
        while (temp->link->link != NULL) {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
}

void sortList(LinkedList *head) {

    if (*head == NULL || (*head)->link == NULL) {
        return;
    }

    int swapped = 1;
    LinkedList current;
    LinkedList last = NULL;

    while (swapped) {
        swapped = 0;
        current = *head;

        while (current->link != last) {
            if (current->data > current->link->data) {
                int temp = current->data;
                current->data = current->link->data;
                current->link->data = temp;
                swapped = 1;
            }
            current = current->link;
        }

        last = current;
    }
}

void insertSorted(LinkedList *head, int value) {

    LinkedList newNode = (LinkedList)malloc(sizeof(struct node));
    newNode->data = value;
    LinkedList temp;

    if (*head == NULL || value <= (*head)->data) {
        newNode->link = *head;
        *head = newNode;
    } else {
        for (temp = *head; temp->link != NULL && value > temp->link->data; temp = temp->link) {}

        newNode->link = temp->link;
        temp->link = newNode;
    }
}

void displayList(LinkedList head) {

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}