#include <stdio.h>

int updateBalance(float *balance, int people);

void main(void)
{
    float bal;
    int num;
    int answer;


    printf("Input balance: ");
    scanf("%f", &bal);

    printf("Input number of persons to call: ");
    scanf("%d", &num);

    //complete the function call
    answer = updateBalance(&bal, num);

    //print the final lines of display here
    printf("\nUpdated balance: P %.2f\n", bal);
    printf("Persons called: %d", answer);

    if(num - answer)
        printf("\nInsufficient balance to call everyone");
}

int updateBalance(float *balance, int people)
{
    if(*balance >= 25 && people > 3)
    {
        *balance -= 25;
        return people;
    }

    int peopleCalled = 0;

    while(*balance >= 7.5 && people > 0)
    {
        *balance -= 7.5;
        peopleCalled++;
        people--;
    }
    
    return peopleCalled;
}