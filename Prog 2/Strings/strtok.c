#include <stdio.h>
#include <string.h>

int main()
{
    // strtok syntax
    // char *strtok(char *str, const char *delim);

    char str[] = "This is a sample string";
    const char s[2] = " ";

    char *token;
    token = strtok(str, s);
    
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
}