////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Print Even Numbers Demo
// Input        : Positive integer entered by user
// Output       : Prints first N even numbers separated by spaces
// Methods      : PrintEven(), printf(), scanf()
// Description  : Demonstrates generation of even numbers using for loop in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int i = 1;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d", 2 * i);
        if (i < iNo)
            printf(" ");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays first N even numbers based on user input, ensuring validation for positive integers.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    if (scanf("%d", &iValue) == 1)
    {
        if (iValue > 0)
        {
            PrintEven(iValue);
        }
        else
        {
            printf("Please enter a positive integer.\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
