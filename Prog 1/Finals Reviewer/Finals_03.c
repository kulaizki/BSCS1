#include <stdio.h>

int generateBinaryDigits(int number);

void main()
{
    int num;
    int answer;

    printf("Input decimal integer: ");
    scanf("%d", &num);

    // complete the function call
    answer = generateBinaryDigits(num);

    // print the final line of the display here
    printf("The binary result is %d.", answer);
}

int generateBinaryDigits(int n)
{
    int binary = 0, place = 1;

    while (n)
    {
        binary += n % 2 * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}