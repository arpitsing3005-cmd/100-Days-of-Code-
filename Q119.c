#include <stdio.h>

int main() {
    int n, arr[1000], freq[1000] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] >= 0 && arr[i] < 1000) {
            freq[arr[i]]++;

            if (freq[arr[i]] == 2) {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }

    return 0;
}