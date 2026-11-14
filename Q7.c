
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:");
    printf("\na = %d, b = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\nAfter swapping:");
    printf("\na = %d, b = %d", a, b);

    return 0;
}
