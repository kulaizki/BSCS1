#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *daysWeeks(int userNum);

int main(void)
{
    int userNum;

    printf("\nEnter day: ");
    scanf("%d", &userNum);

    char *outputVar = daysWeeks(userNum);

    printf("Day of the week: ");
    userNum <= 7 ? puts(outputVar) : printf("INVALID\n\n");

    free(outputVar);
    return 0;
}

char *daysWeeks(int userNum)
{
    const char days[7][64] =
        {
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday",
        };

    char *ptr = malloc(strlen(days[userNum - 1]));
    strcpy(ptr, days[userNum - 1]);

    return ptr;
}