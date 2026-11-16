#include <stdio.h>

int main() {
    int a[10][10], sum[10] = {0};
    int r, c;

    scanf("%d%d", &r, &c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        printf("Sum of row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}