#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    str[len-1] = '\0';

    puts(str);

}