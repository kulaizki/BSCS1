#include <stdio.h>

enum weekdays{mon, tues, wed, thurs = (long long)100, fri} dates;

int main() {

    printf("%d\n", thurs);
    printf("%d\n", sizeof(thurs));

}