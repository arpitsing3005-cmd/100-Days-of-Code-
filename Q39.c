
#include <stdio.h>

int main()
{
    int num, remainder, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 10;

        if (remainder % 2 != 0)
        {
            product = product * remainder;
        }

        num = num / 10;
    }

    printf("Product of odd digits = %d", product);

    return 0;
}
