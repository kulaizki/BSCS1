#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 30, b = 5, c = 30;
    int x = 19, y = 18, z = 20;

    int *t = &x;
    
    int *y2 = &y;
    int **y3 = &y2;
    int ***p = &y3;
    int ***q = &y3;
    int **r = &y2;
    int **s = &y2;

    int *u = &z;

    int ***v;
    int ***w;

    t = **p;
    b = ***q;
    *t = c;
    v = r;
    w = *s;
    a = **v;
    *u = *w;

    printf("Value of t = %d\n", t);
    printf("Value of b = %d\n", b);
    printf("Value of *t = %d\n", *t);
    printf("Value of v = %d\n", v);
    printf("Value of w = %d\n", w);
    printf("Value of a = %d\n", a);
    printf("Value of *u = %d\n", *u);
}