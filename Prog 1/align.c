#include <stdio.h>

int main() {

    // %- left align
    // % right align

    printf("%-5s%6s%6s\n", "Name", "Age", "Score"); 
    printf("%-5s%6d%6d\n", "John", 9, 90);
    printf("%-5s%6d%6d\n", "Alice", 15, 850);
    printf("%-5s%6d%6d\n", "Bob", 20, 78);
}