#include <stdio.h>
#define MAX 50

void main() {
    int series[MAX] = {0};
    int *pSeries = series;
    int count;
    int i;
    int loc;
        
    printf("How long is the series? ");
    scanf("%d", &count);

    //First for loop
    for(i=0; i<count ; i++) {
        printf("Input number %d: ", i+1);
        scanf("%d", series+i);
    }

    //Second for loop
    for (i=0; i <count; i++) {
        if (*(series+i) == 6)
            break;
    }

    loc = i == count? -1: i+1;

    printf("First occurence of 6 is element %d", loc); 
}
