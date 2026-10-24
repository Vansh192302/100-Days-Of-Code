#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    int firstLetter = 1;

    for (int i = 0; str[i] != '\0'; i++) {

        if (firstLetter && isalpha((unsigned char)str[i])) {

            str[i] = toupper((unsigned char)str[i]);
            firstLetter = 0;

        } else {

            str[i] = tolower((unsigned char)str[i]);
        }
    }

    printf("%s", str);

    return 0;
}