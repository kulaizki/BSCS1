#include <stdio.h>
#define MAX 5

void insertRear(int arr[], int *count, int item);
void insertFront(int arr[], int *count, int item);
int removeRear(int arr[], int *count);
int removeFront(int arr[], int *count);
int searchItem(int arr[], int count, int key);
int countEven(int arr[], int count);
void display(int arr[], int count);

int main() {
    int a[MAX];
    int ctr = 0;

    display(a, ctr);
    insertRear(a, &ctr, 5);
    display(a, ctr);
    insertFront(a, &ctr, 1);
    display(a, ctr);
    insertRear(a, &ctr, 7);
    display(a, ctr);
    insertFront(a, &ctr, 8);
    display(a, ctr);
    insertRear(a, &ctr, 20);
    display(a, ctr);

    printf("\nVALUE: %d\n", removeFront(a, &ctr));
    display(a, ctr);
    printf("Is the value %d in the array? %d\n", 100, searchItem(a, ctr, 100));
    printf("Is the value %d in the array? %d\n", 7, searchItem(a, ctr, 7));
    printf("How many even numbers in the collection? %d\n", countEven(a, ctr));
}

void insertRear(int arr[], int *count, int item) {
    if(*count < MAX) {
        arr[(*count)++] = item;
    }
}

void insertFront(int arr[], int *count, int item) {
    if(*count < MAX) {
        for(int i = *count; i > 0; --i) {
            arr[i] = arr[i-1];
        }
        arr[0] = item;
        (*count)++;
    }
}

int removeRear(int arr[], int *count) {
    return arr[--(*count)];
}

int removeFront(int arr[], int *count) {
    int item = arr[0];
    for(int i = 0; i < *count; ++i) {
        arr[i] = arr[i+1];
    }
    (*count)--;
    return item;
}

int searchItem(int arr[], int count, int key) {
    int i;

    int index = -1;
    for(int i = 0; i < count; ++i) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }
    for(i = 0; i < count && arr[i] != key; ++i) {}    
    
    return i == count? -1: i;
}

int countEven(int arr[], int count) {
    int even_count = 0;
    for(int i = 0; i < count; ++i) {
        if(arr[i] % 2 == 0) {
            even_count++;
        }
    }
    return even_count;
}

void display(int arr[], int count) {
    printf("{");
    for(int i = 0; i < count; ++i) {
        printf("%d", arr[i]);
        if(i < count-1) {
            printf(", ");
        }
    }
    printf("}\n");
}