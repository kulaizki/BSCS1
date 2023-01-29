#include <stdio.h>

int main(void)
{
    int L = 18;

    int *x = &L;
    int **y = &x;
    int ***p = &y;
    int **q = &x;

    printf("L = %d\n", L);
    printf("*x = %d\n", *x);
    printf("**y = %d\n", **y);
    printf("***p = %d\n", ***p);
    printf("**q = %d\n", **q);

    puts("\n\n");

    int H = 22;
    int a = 32;
    int b = 61;

    int *z = &H;
    int **r = &z;
    int *s;
    int *t;

    printf("H = %d\n", H);
    printf("*z = %d\n", *z);
    printf("**r = %d\n", **r);

    puts("\n\nSTART:\n");

    a = ***p; // 18
    printf("a = %d\n", a);

    s = **p; // address of y wrong
    printf("s = %d, address of x = %d\n", s, &x);

    t = *p; // &y wrong
    printf("t = %d, address of y = %d\n", t, &y);

    b = **r; // 22
    printf("b = %d\n", b);

    **q = b; // 22
    printf("**q = %d\n", **q);
}
