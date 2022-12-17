#include <stdio.h>

int main(void)
{
    int num_array[] = {1, 2, 3, 4, 5};
    int length = sizeof(num_array) / sizeof(int);

    for (int ctr = 0; ctr < length; ctr++)
    {
        printf("%d\n", num_array[ctr]);
    }

    printf("%d", sizeof(num_array));

    return 0;
}