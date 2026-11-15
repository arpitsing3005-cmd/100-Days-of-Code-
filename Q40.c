
#include <stdio.h>

int main()
{
    int num, remainder, reverse = 0, complement = 0;
    int place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 10;

        if (remainder == 0)
        {
            complement = complement + 1 * place;
        }
        else if (remainder == 1)
        {
            complement = complement + 0 * place;
        }
        else
        {
            printf("Invalid binary number!");
            return 0;
        }

        place = place * 10;
        num = num / 10;
    }

    printf("1's Complement = %d", complement);

    return 0;
}
