#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

void display(struct Node* head);

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

    display(head);

    free(head);
    free(node1);
    free(node2);

    return 0; 
}

void display(struct Node* head) {
    struct Node* current = head->next;

    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}