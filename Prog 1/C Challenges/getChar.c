#include <stdio.h>

int main(void)
{
    int input, ch, output = 0, square;

    printf("Enter number here: ");
    while ((ch = getchar()) != '\n')
    {
        square = (ch -'0') * (ch -'0');
        for (int square_cpy = square; square_cpy; output *= 10, square_cpy /= 10);
        if (square)
            output += square;
        else 
            output *= 10;
    }

    printf("%d", output);
}