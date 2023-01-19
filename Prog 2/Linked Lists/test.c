#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void insert(struct Node** head, int x) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    if (*head != NULL) newNode->next = *head;
    *head = newNode;
}

void display(struct Node* head) {
    printf("List is: ");
    while (head != NULL) 
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void insertAtPos(struct Node** head, int x, int pos) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    struct Node* current = *head;

    if (pos == 0) 
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    else
    {     
        int i = 0;
        while (i < pos-1 && current != NULL)
        {
            current = current->next;
            i++;
        }
    }

    if (current != NULL)
    {
        struct Node* temp = current->next;
        current->next = newNode;
        newNode->next = temp;
    }
}

int main()
{
    struct Node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insertAtPos(&head, 7, 1); // inserted 7 to position 1 (0 is the first position)
    display(head);
    freeList(head);
}