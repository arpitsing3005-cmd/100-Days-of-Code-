#include <stdio.h>

int main() {
    int n, arr[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = arr[i];

        if (arr[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}