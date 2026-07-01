// Input : 10 2
// Output : TRUE

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check Bit At Position Demo
// Description  : Checks whether bit at given position is ON or OFF
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);
    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    bRet = ChkBit(iValue,iPos);

    if(bRet == TRUE)
        printf("Bit is ON");
    else
        printf("Bit is OFF");

    return 0;
}
