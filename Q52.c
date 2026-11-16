
#include <stdio.h>

int main()
{
    int i, j, n;

    for(i = 1; i <= 4; i++)
    {
        if(i == 1)
            n = 1;
        else if(i == 2)
            n = 3;
        else if(i == 3)
            n = 5;
        else
            n = 3;

        for(j = 1; j <= n; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
