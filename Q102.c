
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    int l = 0, r = n - 1, ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] >= x) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    printf("%d", ans);
    return 0;
}
