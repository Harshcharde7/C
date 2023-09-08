#include <stdio.h>

int main()
{
    int i = 2, n = 2, prime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }

    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }

    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}