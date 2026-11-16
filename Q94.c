#include <stdio.h>

int main() {
    char str[200], word[100];
    int max = 0, len = 0, start = 0, maxStart = 0;

    scanf(" %[^\n]", str);

    for(int i = 0; ; i++) {

        if(str[i] != ' ' && str[i] != '\0') {
            len++;
        }
        else {
            if(len > max) {
                max = len;
                maxStart = start;
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest word = ");

    for(int i = maxStart; i < maxStart + max; i++)
        printf("%c", str[i]);

    return 0;
}