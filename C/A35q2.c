// Program to check whether 5th & 18th bit is On or OFF

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check 5th and 18th Bit Demo
// Description  : Checks whether 5th and 18th bits of number are ON or OFF
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010;   // Mask for 5th (2^4) and 18th (2^17) bits
    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Checks 5th and 18th bits.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
        printf("5th and 18th bits are ON");
    else
        printf("5th and 18th bits are OFF");

    return 0;
}
