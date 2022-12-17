#include <stddef.h>
#include <stdio.h>

size_t sum_two_smallest_numbers(size_t n, const int numbers[n]);

int main(void)
{
    size_t n = 5;
    int numbers[5] = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000};

    printf("%lu", sum_two_smallest_numbers(n, numbers));
}

size_t sum_two_smallest_numbers(size_t n, const int numbers[n])
{
    size_t sum, lowestSum = numbers[0] + numbers[1];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            sum = numbers[i] + numbers[j];
            if (lowestSum > sum)
                lowestSum = sum;
        }
    }
    return lowestSum;
}