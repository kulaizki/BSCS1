#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
};

int main()
{
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    head->value = 0;
    head->next = NULL;
    head->prev = NULL;

    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node));
    node1->value = 1;
    node1->prev = head;
    head->next = node1;
    node1->next = NULL;

    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));
    node2->value = 2;
    node2->prev = node1;
    node1->next = node2;
    node2->next = NULL;

    printf("Traversing from head to tail:\n");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }

    printf("Traversing from tail to head:\n");
    current = node2;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->prev;
    }

    free(head);
    free(node1);
    free(node2);

    return 0;
}