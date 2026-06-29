// Program to check whether 7th & 8th & 9th bit is On or OFF

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check 7th, 8th, 9th Bits Demo
// Description  : Checks whether 7th, 8th and 9th bits of number are ON or OFF
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
    UINT iMask = 0x000001C0;   // Mask for 7th (2^6), 8th (2^7), 9th (2^8)
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
// Application : Checks 7th, 8th, 9th bits.
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
        printf("7th, 8th, 9th bits are ON");
    else
        printf("Some or all bits are OFF");

    return 0;
}
