#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

void freeList(struct Node* head);
void display(struct Node* head);
void deleteFront(struct Node* head);
void deleteEnd(struct Node* head);
void deleteAtPos(struct Node* head, int pos);

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

    struct Node* node4 = (struct Node*) malloc(sizeof(struct Node));
    node4->value = 28;
    node3->next = node4;

    struct Node* node5 = (struct Node*) malloc(sizeof(struct Node));
    node5->value = 35;
    node4->next = node5;
    
    node5->next = NULL;

    printf("Initial list: ");
    display(head);

    printf("\ndeleteEront: ");
    deleteFront(head);
    display(head);

    printf("\ndeleteEnd: ");
    deleteEnd(head);
    display(head);

    printf("\ndeleteAtPos: ");
    deleteAtPos(head, 1);
    display(head);

    freeList(head);

}

void display(struct Node* head) {
    struct Node* current = head->next;

    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
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
    // create a pointer to the current first node
    struct Node* prev = head;

    // we create a pointer to the first element
    struct Node* current = head->next;

    if (current != NULL) {
        // we traverse through the list until we reach
        // the last element of the list
        while (current->next != NULL) {
            prev = prev->next;
            current = current->next;
        }

        // delete the last node
        free(current);

        // we used prev to be able to point to NULL
        // or else we will be pointing to garbage value
        prev->next = NULL;
    } 
}

void deleteAtPos(struct Node* head, int pos) {
    // we create a pointer to the head
    struct Node* current = head;

    // we go to the position of the node to be deleted
    int i = 0;
    while (i < pos && current != NULL) {
        current = current->next;
        i++;
    }

    // we delete the node
    if (current != NULL) {
        struct Node* temp = current->next;
        current->next = temp->next;

        free (temp);
    }
}