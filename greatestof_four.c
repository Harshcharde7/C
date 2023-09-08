#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, max;

    printf("Enter four numbers\n");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    // Assuming the numbers are distinct
    max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }

    printf("The greatest number is %2f\n", max);

    return 0;
}