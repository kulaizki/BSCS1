#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cipher[] = "ABCDI";
    char cipher2[] = "NOPQE";
    char *msg = (char *)malloc(256);

    printf("The Coded Message Is: ");
    scanf("%s", msg);

    printf("The Decoded Message is: ");
    while (*msg) {
        // swaps letters if it is in the Cipher table
        for (int i = 0; i < 5; i++) {
            if (*msg == cipher[i])
                *msg = cipher2[i];
            else if (*msg == cipher2[i])
                *msg = cipher[i];
        }
        printf("%c", *msg++);
    }
    printf(" !!");
}
