////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Difference Between Even and Odd Digit Sum Demo
// Input        : Integer number entered by user
// Output       : Prints difference between summation of even digits and odd digits
// Methods      : CountDiff(), printf(), scanf()
// Description  : Demonstrates digit extraction and summation difference in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Difference between summation of even digits and odd digits
// Input : 2395
// Output : -15
// Input : 1018
// Output : 6
// Input : 8440
// Output : 16
// Input : 5733
// Output : -18

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
            iEvenSum += iDigit;
        else
            iOddSum += iDigit;
        iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates difference between summation of even digits and odd digits.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N means number of digits.
Each digit is checked once, then added either in even sum or odd sum.
*/
