
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int start = 1;

    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            start = 1;
        }
        else if (start == 1) {
            printf("%c.", toupper(name[i]));
            start = 0;
        }
    }

    return 0;
}
