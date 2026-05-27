////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Summation of Non-Factors Demo
// Input        : Integer number entered by user
// Output       : Prints summation of all non-factors of the number
// Methods      : SumNonFact(), printf(), scanf()
// Description  : Demonstrates summation of non-factors using for loop in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates and displays summation of non-factors of a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non-factors: %d\n", iRet);

    return 0;
}
