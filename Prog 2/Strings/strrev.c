#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Hello, world";
    char *reverse = strrev(str);

    printf("%s", reverse);
}