
#include <stdio.h>

int main()
{
    int num, first, last, temp, digits = 1, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Find the last digit
    last = num % 10;

    // Find the first digit and number of digits
    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    // Swap the first and last digits
    result = last * divisor + (num % divisor) - last;
    result = result - (first * divisor) + first;

    printf("Number after swapping: %d", result);

    return 0;
}
