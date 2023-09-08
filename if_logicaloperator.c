#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("enter your age\n");
    scanf("%d", &age);

    // if (age <= 70 && age >= 18)
    if ((age <= 70 && age >= 18) || (vipPass == 1))

    {
        printf("You are above 18 and below 70, you can Drive\n");
    }
    else
    {
        printf("you cannot Drive\n");
    }

    return 0;
}