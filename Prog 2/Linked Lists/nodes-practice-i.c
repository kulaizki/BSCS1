#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

int main(void) 
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));

    printf("Enter a number: ");
    scanf("%d", node);
    printf("Node's value: %d", node->value);

    free(node);
    
    return 0;
}