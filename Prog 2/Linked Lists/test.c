#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main()
{
    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node));
    node1->data = 4;

    printf("%d", node1->data);
}