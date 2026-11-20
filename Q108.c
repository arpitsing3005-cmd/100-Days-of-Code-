#include <stdio.h>

int main() {
    int n, nums[1000], ans[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int prefix = 1;

    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}