////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Even Factor Display Demo
// Input        : Integer number entered by user
// Output       : Prints all even factors of the entered number
// Methods      : DisplayFactor(), printf(), scanf()
// Description  : Demonstrates factor calculation with condition to show only even factors in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Illustrates calculation and display of even factors for user-entered numbers, with validation for zero input.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    if (scanf("%d", &iValue) == 1)
    {
        if (iValue != 0)
        {
            DisplayFactor(iValue);
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
