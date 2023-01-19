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

int isSorted(struct Node* head) {
    while (head->next != NULL) {
        if (head->data > head->next->data)
            return 0;
        head = head->next;
    }
    return 1;
}

int getSum(struct Node* head) {
    int sum = 0;
    while (head != NULL) {
        sum += head->data;
        head = head->next;
    }
    return sum;
}

void reverse(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void display(struct Node* head) {
    while (head != NULL) {
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

    if (pos == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    else {     
        int i = 0;
        while (i < pos-1 && current != NULL) {
            current = current->next;
            i++;
        }
    }

    if (current != NULL) {
        struct Node* temp = current->next;
        current->next = newNode;
        newNode->next = temp;
    }
}

int main()
{
    struct Node* head = NULL;

    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    printf("Initial list: "); display(head);

    printf("Insert 0 in position 0: ");
    insertAtPos(&head, 0, 0); display(head); // inserted 0 to position 0
    
    isSorted(head) ? printf("List is sorted.") : printf("List is not sorted.");

    printf("\nSum of the list = %d", getSum(head)); 

    printf("\nReverse list: ");
    reverse(&head); display(head);

    freeList(head);
}