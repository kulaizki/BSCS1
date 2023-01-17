#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int val);
void display(struct Node* head);  
struct Node* reverse(struct Node* head);

int main()
{
    // in progress
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));

    struct Node* node1 = createNode(1);
    head->next = node1;

    struct Node* node2 = createNode(2);
    node1->next = node2;

    struct Node* node3 = createNode(3);
    node2->next = node3;

    display(head);
    head = reverse(head);
    printf("\n");
    display(head);

    free(head);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = val;
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

struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}