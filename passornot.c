#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter Physics Mark\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Mark\n");
    scanf("%d", &chemistry);

    printf("Enter Maths Mark\n");
    scanf("%d", &maths);

    total = (physics + maths + chemistry) / 3;
    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %f and you are Fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are Pass\n", total);
    }
    return 0;
}