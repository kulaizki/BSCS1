#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

int main(void)
{
    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));

    printf("Enter number 1: ");
    scanf("%d", node1);

    printf("Enter number 2: ");
    scanf("%d", node2);

    struct Node* firstNode;
    if (node1->value > node2->value) {
        node1->next = node2;
        firstNode = node1;
    } else {
        node2->next = node1;
        firstNode = node2;
    }

    printf("%d -> %d", firstNode->value, firstNode->next->value);

    free(node1);
    free(node2);

    return 0;
}