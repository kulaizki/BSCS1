#include <stdio.h>

int maximumSubArraySum(int arr[], int n) {

    if (n == 0) return -1;

    int x;
    int sum = arr[0];
    int max_sum = arr[0];

    for (x = 1; x < n; ++x) {
        int cur = arr[x];
        sum = (cur > sum+cur) ? cur : sum+cur;
        max_sum = (sum > max_sum) ? sum : max_sum;
    }

    return max_sum;
}

int main() {

    int a[] = {-2, -1, -3, 4, -1, 2, 1, -4, 4};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d\n", maximumSubArraySum(a, n));
}