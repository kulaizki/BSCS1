#include <stdio.h>
#include <stdlib.h>

void display(struct Node* head);

struct Node {
    int value;
    struct Node* next;
};

int main()
{

   return 0; 
}

void display(struct Node* head) {
    struct Node* current = head->next;

    while (current != NULL) {
        printf("%d", current->value);
        current = current->next;
    }
}