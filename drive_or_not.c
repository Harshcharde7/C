#include <stdio.h>

int main()
{
    int a;
    printf("Your age please\n");
    scanf("%d", &a);

    if (a > 18)
    {
        printf("You can Drive\n");
    }
    else
    {
        printf("Sry you can't Drive\n");
    }
    return 0;
}