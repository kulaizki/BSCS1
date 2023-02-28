// pointers intro
#include <stdio.h>

int main() {
    
    int x = 5, y = 10;

    int *p1;
    p1 = &x;
    int *p2 = &y;

    // p = &x address of x
    // p2 = &y address of y
    // *p = x
    // *p2 = y

    
    printf("x = %d\n", x); // 5
    printf("y = %d\n", y); // 10
    printf("&x = %d\n", &x); // address of x
    printf("&y = %d\n", &y); // address of y
    printf("p1 = %d\n", p1); // address of x
    printf("y = %d\n", p2); // address of y
    printf("*p1 = %d\n", *p1); // 5 (dereferencing)
    printf("*p2 = %d\n", *p2); // 10 (dereferencing)
}