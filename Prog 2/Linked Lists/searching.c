#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int value;
    struct Node* next;
};

bool exists(struct Node* head, int value);

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

    exists(head, 14) ? printf("14 exists") : printf("14 doesn't exist");
}

bool exists(struct Node* head, int value) {
    // we set the flag to false to indicate that
    // we haven't found the item yet
    bool flag = false;

    // we create a pointer to the next element
    // of the head of the linked list because
    // this is the container of the first element
    struct Node* current = head->next;

    // we continue traversing through the elements
    // as long as the current pointer is not yet
    // pointing to null
    while (current != NULL) {
        // if the value of the current node is equal
        // to the value we're looking for, then we
        // set the flag to true and break from the loop
        if (current->value == value) {
            flag = true;
            break;
        }

        // we move on to the next node
        current = current->next;
    }

    return flag;
}