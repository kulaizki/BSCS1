#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L = 18;
    int H = 22;
    int a = 32;
    int b = 61;

    int *X = &L;
    int **Y = &X;
    int **q = &X;
    int ***p = &Y;

    int *Z = &H;
    int **r = &Z;

    a = ***p;
    int s = **p;
    int t = *p;
    b = **r;
    **q = b;

    printf ("Value of a: %d\n", a);
    printf ("Value of s: %d\n");
    printf("Value of t: %d\n", *p);
    printf ("Value of b: %d\n", **r);
    printf ("Value of **q: %d\n", b);

    return 0;
}