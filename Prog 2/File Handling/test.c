#include <stdio.h>

int main()
{
    int x;
    for (x = 999; x < 999; ++x) {}
    printf("%d", x);
}