#include <stdio.h>

int main() {
    char str[100];
    int last = 0;

    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            last = i + 1;
    }

    for(int i = 0; i < last; i++) {
        if(i == 0 || str[i - 1] == ' ')
            printf("%c.", str[i]);
    }

    printf(" ");

    for(int i = last; str[i] != '\0'; i++)
        printf("%c", str[i]);

    return 0;
}