////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Factor vs Non-Factor Summation Difference Demo
// Input        : Integer number entered by user
// Output       : Prints difference between summation of factors and non-factors
// Methods      : FactDiff(), printf(), scanf()
// Description  : Demonstrates calculation of difference between factor sum and non-factor sum in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum = iNonFactSum + i;
        }
    }

    return (iFactSum - iNonFactSum);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates difference between summation of factors and non-factors of a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
