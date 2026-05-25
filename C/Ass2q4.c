////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Number Display with Frequency Demo
// Input        : Two integers (number and frequency)
// Output       : Prints the first number repeatedly for the given frequency
// Methods      : Display(), printf(), scanf()
// Description  : Demonstrates printing a number multiple times based on user-specified frequency in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;    
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays a number repeatedly according to user-defined frequency, handling positive and negative values.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    printf("Enter frequency: ");
    scanf("%d", &iCount);
    
    Display(iValue, iCount);
    
    return 0;
}

// Input: 12 5
// Output: 12 12 12 12 12

// Input: -2 3
// Output: -2 -2 -2

// Input: 21 -3
// Output: 21 21 21

// Input: -2 0
// Output: (no output)
