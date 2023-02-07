#include <stdio.h>

int main()
{
    char *str1 = "Hello";
    char str2[] = "Hello";
    

    printf("\"Hello\": %p\n", "Hello"); // in the read-only memory (ROM)
    printf("str1: %p\n", str1); // in the read-only memory (ROM)
    printf("str2: %p\n", str2);

    return 0;
}
