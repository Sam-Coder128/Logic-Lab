#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if ((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    if (scanf("%d", &iValue) == 1)
    {
        if (iValue != 0)
        {
            DisplayEvenFactor(iValue);
        }
        else
        {
            printf("Zero has no valid even factors.\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
