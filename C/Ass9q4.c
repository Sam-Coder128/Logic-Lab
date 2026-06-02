////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Multiplication of Digits Demo
// Input        : Integer number entered by user
// Output       : Prints multiplication of all digits
// Methods      : MultDigits(), printf(), scanf()
// Description  : Demonstrates digit extraction and multiplication in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Multiplication of all digits
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 922432
// Output : 864

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
            iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates multiplication of all digits in a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N means number of digits.
Every digit is processed once for multiplication.
*/
