#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value);
void display(struct Node* head);  
struct Node* reverse(struct Node* head);
void freeList(struct Node* head);

int main()
{
    // in progress
    struct Node* head = createNode(4);

    struct Node* node1 = createNode(1);
    head->next = node1;

    struct Node* node2 = createNode(2);
    node1->next = node2;

    struct Node* node3 = createNode(3);
    node2->next = node3;

    display(head);
    head = reverse(head);
    display(head);

    freeList(head);

    return 0;
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
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

void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}