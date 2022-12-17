#include <stdio.h>
#include <stdlib.h>

// complete the function prototype
int getSequenceTerms(int terms[], int M, int N, int count);

void main()
{
    int terms[3], M, N, count;
    int answer;

    printf("Input first three terms: ");
    scanf("%d %d %d", &terms[0], &terms[1], &terms[2]);
    printf("Input the nth term ranges: ");
    scanf("%d %d", &M, &N);

    // complete the function call
    answer = getSequenceTerms(terms, M, N, count);

    // print the final lines of the display here
    int gap = terms[1] - terms[0];
    int start;

    if (gap < 0)
    {
        start = (-gap) * N + (N - M);
    }
    else
    {
        start = gap * M;
    }

    if (answer)
    {
        printf("\nTerms %d to %d of the sequence are: \n{", M, N);
        for (int i = 0; i < N - M; i++)
        {
            printf("%d ", start);
            start += gap;
        }

        printf("%d}", start);
    }
}

int getSequenceTerms(int terms[], int M, int N, int size)
{
    // write your code here
    if (terms[1] - terms[0] != terms[2] - terms[1])
    {
        printf("Sequence is not valid!\n");
        return 0;
    }
    return 1;
}