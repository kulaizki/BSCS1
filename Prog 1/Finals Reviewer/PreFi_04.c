#include <stdio.h>
#include <stdlib.h>

int *get_factors(int list[], int count, int value, int *ret_count);
void display(int list[], int count);

int main(void)
{
    int ret_count = 0, size = 0, target = 0;
    printf("How many numbers? ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value: ");
    scanf("%d", &target);
    printf("The collection: "); display(arr, size);
    
    arr = get_factors(arr, size, target, &ret_count);
    
    printf("The factors of %d present in collection: ", target); 
    display(arr, ret_count);
    
    return 0;
}

int *get_factors(int list[], int count, int value, int *ret_count)
{
    int ping = 0;
    for (int i = 0; i < count; i++)
    {
        if (value % list[i] == 0)
            ping++;
    }

    int *new_arr = malloc(ping * sizeof(int));

    for (int i = 0, *p = new_arr; i < count; i++)
    {
        if (value % list[i] == 0)
            *p++ = list[i];
    }

    *ret_count = ping;
    return new_arr;
}

void display(int list[], int count)
{
    printf("{");
    for (int i = 0; i < count; ++i)
    {
        printf("%d", list[i]);
        if (i < count - 1)
            printf(", ");
    }
    printf("}\n");
}