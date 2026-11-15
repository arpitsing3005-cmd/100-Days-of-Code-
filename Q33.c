
#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;

    // Count the number of digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate the sum of powers of digits
    while (temp > 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number.", original);
    }
    else
    {
        printf("%d is not an Armstrong number.", original);
    }

    return 0;
}
