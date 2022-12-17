#include <stdio.h>
#include <math.h>

// complete the function prototype
float computeCompoundInterest(float amount, int interest, int years);
int main(void)
{
    float p;
    int rate, years;
    float answer;

    printf("Input principal: ");
    scanf("%f", &p);

    printf("Input rate (percent): ");
    scanf("%d", &rate);

    printf("Input number of years: ");
    scanf("%d", &years);

    // complete the function call
    answer = computeCompoundInterest(p, rate, years);

    // print the final line of the display here
    printf("Total interest in %d years: P %.2f", years, answer);
}

float computeCompoundInterest(float amount, int interest, int years)
{
    float answer = amount * pow((1 + (float)interest / 100), (float)years) - amount;

    return answer;
}