#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// complete the function prototypes
void getInputs(int *, int *, char);
int isSubset(int *, int *, int, int);

void main()
{
    int A[MAX], B[MAX], Asize, Bsize;
    int answer;

    getInputs(A, &Asize, 'A');
    getInputs(B, &Bsize, 'B');

    // complete the function call
    answer = isSubset(A, B, Asize, Bsize);

    printf("\nIs set B a subset of set A? %d", answer);
}

void getInputs(int arr[], int *size, char ch)
{
    printf("Input set %c size: ", ch);
    scanf("%d", size);
    printf("Input set %c elements: ", ch);
    for (int i = 0; i < *size; i++)
        scanf("%d", &arr[i]);
}

int isSubset(int A[], int B[], int Asize, int Bsize)
{
    int ctr = 0;

    for (int i = 0; i < Bsize; i++)
    {
        for (int j = 0; j < Asize; j++)
        {
            if (B[i] == A[j])
                ctr++;
        }
    }

    if (ctr == Bsize)
        return 1;

    return 0;
}