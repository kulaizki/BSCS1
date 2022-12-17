#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

int *get_even(int list[]);
void display(int list[]);

int main(void)
{
    int n, value;
    int arr[MAX];

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    arr[n] = -1;

    display(arr);

    int *arr2 = get_even(arr);
    display(arr2);
}

int *get_even(int list[])
{
    int temp[MAX];
    int ctr = 0;

    while(*list != -1){
        if (*(list) % 2 == 0){
            temp[ctr++] = *list;
        }
        list++;
    }

    temp[ctr++] = -1;
    printf("ctr = %d\n", ctr);

    int *even = malloc(sizeof(int) * ctr);

    memcpy(even, temp, sizeof(int) * ctr);

    return even;
}

void display(int list[]) {
    printf("{");
    for(; *list != -1; list++) {
        printf("%d, ", *list);
        if (*(list+1) == -1)
            printf("%d", *(list+1));
    }

    printf("}\n");
}