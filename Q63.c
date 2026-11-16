#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n, m;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n; i++)
        c[i] = a[i];

    for(int i = 0; i < m; i++)
        c[n + i] = b[i];

    for(int i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}