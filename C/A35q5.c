// Program to check whether first and last bit is On or OFF
// First bit means bit number 1 and last bit means bit number 32

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check First and Last Bit Demo
// Description  : Checks whether 1st and 32nd bits of number are ON or OFF
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
    UINT iMask = 0x80000001;   // Mask for 1st (2^0) and 32nd (2^31) bits
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
// Application : Checks 1st and 32nd bits.
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
        printf("First and Last bits are ON");
    else
        printf("First and/or Last bits are OFF");

    return 0;
}
