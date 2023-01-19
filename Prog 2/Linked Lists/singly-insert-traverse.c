#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void insert(struct Node** head, int x) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (*head != NULL) temp->next = *head;
    *head = temp;
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

int main()
{
    struct Node* head = NULL; // empty list
    printf("Enter n: ");
    int n, i, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("Enter number: ");
        scanf("%d", &x);
        insert(&head, x);
        display(head);
    }
}