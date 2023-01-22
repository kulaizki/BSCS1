#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head != NULL) { newNode->next = *head; }
    *head = newNode;
}

void reverseList(struct Node** head) {
    if(head == NULL) {
        printf("Error: The list is empty\n");
        return;
    }

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

int getMax(struct Node* head) {
    if(head == NULL) {
        printf("Error: The list is empty\n");
        return INT_MIN;
    }   

    int max = INT_MIN;

    while (head != NULL) {
        if (head->data > max) {
            max = head->data;
        }
        head = head->next;
    }
    return max;
}

int getSecondMax(struct Node* head) {
    if(head == NULL || head->next == NULL) {
        printf("Error: The list does not have at least 2 elements\n");
        return INT_MIN;
    }

    int max = getMax(head);
    int secondMax = INT_MIN;

    while (head != NULL) {
        if (head->data > secondMax && head->data < max) {
            secondMax = head->data;
        }
        head = head->next;
    }
    return secondMax;
}

void displayList(struct Node* head) {
    if(head == NULL) {
        printf("Error: The list is empty\n");
        return;
    }  

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

int main()
{
    struct Node* head = NULL;
    int size, i;

    printf("Enter size of list: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (i = 0; i < size; ++i) {
        int input;
        scanf("%d", &input);
        insertNode(&head, input);
    }

    printf("\nCurrent list: "); displayList(head);

    reverseList(&head);
    printf("Reversed list: "); displayList(head);

    int max = getMax(head);
    int secondMax = getSecondMax(head);

    printf("Max value in the list = %d\n", max);
    printf("Second max value in the list = %d\n", secondMax);

    freeList(head);
}