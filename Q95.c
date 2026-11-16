#include <stdio.h>

int main() {
    char a[100], b[100];
    int len1 = 0, len2 = 0, flag = 0;

    scanf("%99s", a);
    scanf("%99s", b);

    while(a[len1] != '\0')
        len1++;

    while(b[len2] != '\0')
        len2++;

    if(len1 == len2) {

        char temp[200];

        for(int i = 0; i < len1; i++)
            temp[i] = a[i];

        for(int i = 0; i < len1; i++)
            temp[len1 + i] = a[i];

        temp[2 * len1] = '\0';

        for(int i = 0; i < len1; i++) {
            int j;

            for(j = 0; j < len1; j++) {
                if(temp[i + j] != b[j])
                    break;
            }

            if(j == len1) {
                flag = 1;
                break;
            }
        }
    }

    if(flag)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}