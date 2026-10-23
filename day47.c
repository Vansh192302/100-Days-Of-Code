
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int freq[256] = {0};

    scanf("%99s %99s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    for (int i = 0; a[i] != '\0'; i++) {
        freq[(unsigned char)a[i]]++;
        freq[(unsigned char)b[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
