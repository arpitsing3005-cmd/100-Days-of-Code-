
#include <stdio.h>

int main()
{
    int n, i, numerator = 1, denominator = 2;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}
