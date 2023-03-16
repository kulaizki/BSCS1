#include <stdio.h>

union test {
    int d;
    char c;
    float f;
};

int main() {

    union test x;
    x.d = 7;
    x.f = 1.0;

    printf("x.f: %.2f\n", x.f);
    printf("x.d: %d\n", x.d);
    printf("x.c: %d\n", x.c);
}