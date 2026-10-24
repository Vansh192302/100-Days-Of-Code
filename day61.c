#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {

        int negative = 0;

        for (int j = i; j < i + k; j++) {

            if (arr[j] < 0) {
                negative = arr[j];
                break;
            }
        }

        printf("%d", negative);

        if (i < n - k) {
            printf(" ");
        }
    }

    return 0;
}