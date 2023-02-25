#include <stdio.h>

int main()
{
    char str1[50] = "kopqwd";
    char *str2 = "abcdefgijklmnopqrstuvwxyz";
    char *str3 = "zxc";
    char *str4 = "zxc";

    printf("Address of str1: %p\n", str1);
    printf("Address of str2: %p\n", str2);
    printf("Address of str3: %p\n", str3);
    printf("Address of str4: %p\n", str4);
}