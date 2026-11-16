#include <stdio.h>
#include <limits.h>

int main() {
    int a[100], n;
    int first = INT_MIN, second = INT_MIN;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if(a[i] > first) {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] < first) {
            second = a[i];
        }
    }

    if(second == INT_MIN)
        printf("No second largest element");
    else
        printf("Second largest = %d", second);

    return 0;
}