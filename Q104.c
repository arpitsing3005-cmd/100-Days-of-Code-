
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;
    long long x = 1;

    while (x <= n) {
        long long sum = x * (x + 1) / 2;

        if (sum == total - (x * (x - 1) / 2)) {
            printf("%lld", x);
            return 0;
        }

        x++;
    }

    printf("-1");
    return 0;
}