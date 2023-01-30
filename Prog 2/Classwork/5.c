#include <stdio.h>

int main()
{
    char str1[50] = "kopqwd";
    char *str2 = "abcdefgijklmnopqrstuvwxyz";

    printf("%d\n", sizeof(str1));
    printf("%d\n", sizeof(str2));
}