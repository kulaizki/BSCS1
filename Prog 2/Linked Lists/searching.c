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