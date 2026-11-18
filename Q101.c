
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    int first = -1, last = -1;
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] >= target)
            r = mid - 1;
        else
            l = mid + 1;
    }

    if (l < n && a[l] == target) {
        first = l;
        r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (a[mid] <= target)
                l = mid + 1;
            else
                r = mid - 1;
        }

        last = r;
        printf("First: %d Index: %d\n", target, first);
        printf("Last: %d Index: %d\n", target, last);
    } else {
        printf("-1 -1\n");
    }

    return 0;
}
