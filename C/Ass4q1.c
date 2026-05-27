////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Multiplication of Factors Demo
// Input        : Integer number entered by user
// Output       : Prints multiplication of all factors of the entered number
// Methods      : MultFact(), printf(), scanf()
// Description  : Demonstrates factor calculation and cumulative multiplication of factors in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates multiplication of all factors of a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors: %d\n", iRet);

    return 0;
}
