#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end;

    scanf(" %[^\n]", str);

    for(int i = 0; ; i++) {

        if(str[i] == ' ' || str[i] == '\0') {

            end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}