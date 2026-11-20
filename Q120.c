#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    int first = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (first && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            first = 0;
        }
        else if (isalpha((unsigned char)str[i])) {
            str[i] = tolower((unsigned char)str[i]);
        }
    }

    printf("%s", str);

    return 0;
}