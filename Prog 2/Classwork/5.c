#include <stdio.h>

int main()
{
    char str1[50] = "kopqwd";
    char *str2 = "abcdefgijklmnopqrstuvwxyz";
    char *str3 = "zxc";

    printf("%p\n", str1);
    printf("%p\n", str2);
    printf("%p\n", str3);
}