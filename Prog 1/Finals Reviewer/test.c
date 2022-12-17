#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    char string[10];

    printf("enter: ");
    gets(string);

    printf("%d", strlen(string));
}