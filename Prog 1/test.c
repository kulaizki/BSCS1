#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "abcdb";
    char str2[] = "abcdd";

    // if (strcmp(str1, str2) == 0) {
    //     printf("equal\n");
    // }

    printf("%d\n", strcmp(str1, str2));
}