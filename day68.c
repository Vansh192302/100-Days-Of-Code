#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int nums[n];
    int actualSum = 0;

    for (int i = 0; i < n; i++) {

        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}