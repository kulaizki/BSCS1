#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#define INT_MIN -2147483648
#define INT_MAX 214748364

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i) {
        scanf("%d", &list[i]);
    }

    printf("Initial soul list: ");
    display(list);
    
    printf("Sorted soul list: ");

    int *newArray = sorting_souls(list);
    display(newArray);

    return 0;
}

void display(int arr[]) {
    printf("[");
    for(int i = 1; i <= arr[0]; ++i) {
        printf("%d", arr[i]);
        if(i < arr[0]) {
            printf("|");
        }
    }
    printf("], SOUL COUNT: %d\n", arr[0]);
}

int *sorting_souls(int arr[]) {

    int max = arr[1];
    
    for (int i = 1; i <= arr[0]; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int second = 0;
    int ctr = 0;

    for (int i = 1; i <= arr[0]; i++)
    {
        if (arr[i] == max)
            continue;

        if (arr[i] > second)
        {
            second = arr[i];
            ctr = i;
        }   
    }

    for(int i = ctr; i <= arr[0]; ++i) 
    {
        if(arr[i] == second)
        {
            ctr = i;
            break;
        }
    }


    // for (int i = ctr+1; i <= arr[0]; i++)
    // {
    //     if (arr[i] == second)
    //     {
    //         second = arr[i];
    //         ctr = i;   
    //         break;
    //     }    
       
    // }

    int *souls = malloc(sizeof(int) * (arr[0] - ctr + 1));
        
    souls[0] = (arr[0] - ctr + 1);
    int count = 1;

    if (arr[0] == 1)
        souls[0] = 0;
    
    for (int i = ctr; i <= arr[0]; i++)
    {
        souls[count] = arr[i];
        count++;
    }

    return souls;     
}