#include <stdio.h>
#include <stdlib.h>

int main() {

    char *str1 = "444445";
    char *str2 = "555555";

    printf("%s + %s = %d", str1, str2, atoi(str1) + atoi(str2));
}