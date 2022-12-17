#include <stdio.h>

int main()
{
    // Decimal number to be converted
    int decimal;
    
    printf("Enter decimal to convert: ");
    scanf("%d", &decimal);
    // Binary array to store the binary equivalent of the decimal number
    int binary[8];

    // Loop index
    int i = 0;

    // Repeat the division until the decimal number is 0
    while (decimal > 0)
    {
        // Divide the decimal number by 2 and store the remainder in the binary array
        binary[i] = decimal % 2;

        // Update the decimal number by dividing it by 2
        decimal /= 2;

        // Increment the loop index
        i++;
    }

    // Print the binary equivalent of the decimal number
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}