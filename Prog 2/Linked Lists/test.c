#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* head) {
    struct Node* current = head->next;

    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    struct Node* node1 = createNode(2);
    head->next = node1;
    struct Node* node2 = createNode(4);
    node1->next = node2;
    struct Node* node3 = createNode(6);
    node2->next = node3;
    struct Node* node4 = createNode(8);
    node3->next = node4;

    display(head);
    freeList(head);

    return 0;
}