#include <stdio.h>

int main()
{
    printf("***Multiplaction table of 8***\n\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("8 x %d = %d\n", i, 8 * i);
    }

    return 0;
}