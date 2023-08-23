# include <stdio.h>
/*
Print a multiplaction table of a number entered by the user in
*/
int main()
{
    int number = 6;

    printf("Table of %d:\n", number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
