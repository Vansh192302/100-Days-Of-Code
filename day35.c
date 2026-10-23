#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[100];
    int largest = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest element");
    else
        printf("%d", second);

    return 0;
}