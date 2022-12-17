#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cipher[5] = "ABCDI";
    char cipher2[5] = "NOPQE";
    char *msg = malloc(256);

    printf("The Coded Message Is: ");
    scanf("%s", msg);

    printf("The Decoded Message is: ");
    while (*msg)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*msg == cipher[j])
                *msg = cipher2[j];

            else if (*msg == cipher2[j])
                *msg = cipher[j];
        }

        printf("%c", *msg++);
    }
    printf(" !!");
}