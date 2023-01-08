#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

int main()
{
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));

    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node));
    node1-> value = 5;

    head->next = node1;

    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));
    node2->value = 10;

    node1->next = node2;

    printf("Accessing the value of Node 2 from the head: %d", head->next->next->value);

}