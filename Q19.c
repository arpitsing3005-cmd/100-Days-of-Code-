
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid sides.");
    }
    else if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("These sides cannot form a triangle.");
    }
    else if (a == b && b == c)
    {
        printf("The triangle is Equilateral.");
    }
    else if (a == b || b == c || a == c)
    {
        printf("The triangle is Isosceles.");
    }
    else
    {
        printf("The triangle is Scalene.");
    }

    return 0;
}
