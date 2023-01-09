#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

void deleteFront(struct Node* head);
void deleteEnd(struct Node* head);
void deleteAtPos(struct Node* head, int pos);

int main()
{
    
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