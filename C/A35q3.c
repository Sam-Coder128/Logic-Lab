// Program to check whether 7th & 15th & 21st & 28th bit is On or OFF

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check Multiple Bits Demo
// Description  : Checks whether 7th, 15th, 21st and 28th bits of number are ON or OFF
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
    UINT iMask = 0x10042040;   // Mask for 7th (2^6), 15th (2^14), 21st (2^20), 28th (2^27)
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
// Application : Checks 7th, 15th, 21st, 28th bits.
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
        printf("7th, 15th, 21st, 28th bits are ON");
    else
        printf("Some or all bits are OFF");

    return 0;
}
