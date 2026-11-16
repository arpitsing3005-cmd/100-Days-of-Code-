#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, found = 0;

    scanf("%99s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if(freq[index] == 1) {
                printf("First repeating character = %c", str[i]);
                found = 1;
                break;
            }

            freq[index]++;
        }
    }

    if(!found)
        printf("No repeating character");

    return 0;
}