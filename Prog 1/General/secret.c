#include <stdio.h>
int main()
{
    int num, modulo, rev = 0;
    int *pn, *pr;

    printf("Enter the number: ");
    scanf("%li", &num);

    pn = &num;
    pr = &rev;

    while (*pn > 0)
    {
        modulo = *pn % 10;
        *pr = (*pr * 10) + modulo;
        *pn = *pn / 10;
    } 

    printf("%d\n", *pr);

    return 0;
}