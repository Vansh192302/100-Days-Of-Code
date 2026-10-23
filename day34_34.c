#include <stdio.h>

int main() {
    int n, a[100], x, pos = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found");
    } else {
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}