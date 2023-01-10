#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int value);
void display(struct Node* head);
void insertFront(struct Node* head, int val);
void insertEnd(struct Node* head, int val);
void insertAtPos(struct Node*head, int val, int pos);
bool search(struct Node* head, int val);
void deleteFront(struct Node* head);
void deleteEnd(struct Node* head);
void deleteAtPos(struct Node* head, int pos);
void freeList(struct Node* head);

int main()
{
    // not yet finished
    struct Node* head = createNode(1);

    struct Node* node1 = createNode(2);
    head->next = node1;
    struct Node* node2 = createNode(4);
    node1->next = node2;
    struct Node* node3 = createNode(6);
    node2->next = node3;
    struct Node* node4 = createNode(8);
    node3->next = node4;


    return 0;
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* head) {

}

void insertFront(struct Node* head, int val) {

}

void insertEnd(struct Node* head, int val) {

}

void insertAtPos(struct Node*head, int val, int pos) {

}

bool search(struct Node* head, int val) {

}

void deleteFront(struct Node* head) {

}

void deleteEnd(struct Node* head) {

}

void deleteAtPos(struct Node* head, int pos) {

}

void freeList(struct Node* head) {

}