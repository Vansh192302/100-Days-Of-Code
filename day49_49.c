
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int last = 0;

    fgets(name, sizeof(name), stdin);

    int n = strlen(name);

    while (n > 0 && (name[n - 1] == '\n' ||
           name[n - 1] == ' ')) {
        name[--n] = '\0';
    }

    for (int i = 0; i < n; i++) {
        if (name[i] == ' ') {
            last = i + 1;
        }
    }

    int start = 1;

    for (int i = 0; i < last; i++) {
        if (name[i] == ' ') {
            start = 1;
        }
        else if (start) {
            printf("%c. ", toupper(name[i]));
            start = 0;
        }
    }

    printf("%s", name + last);

    return 0;
}
