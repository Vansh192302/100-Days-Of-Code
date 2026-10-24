
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp;
    int start = 0;

    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\n' ||
            str[i] == '\0') {

            int left = start;
            int right = i - 1;

            while (left < right) {
                temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);
    return 0;
}
