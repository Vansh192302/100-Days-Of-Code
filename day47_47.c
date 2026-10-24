
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[200] = "";
    int start = 0, len = 0, max = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' ||
            str[i] == '\0') {

            if (len > max) {
                max = len;
                strncpy(word, str + start, len);
                word[len] = '\0';
            }

            len = 0;
            start = i + 1;
        }
        else {
            len++;
        }

        if (str[i] == '\0')
            break;
    }

    printf("%s", word);
    return 0;
}
