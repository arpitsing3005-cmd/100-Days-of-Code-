#include <stdio.h>

int main() {
    int n, arr[1000];
    long long sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    long long expected = (long long)n * (n + 1) / 2;

    printf("%lld", expected - sum);

    return 0;
}