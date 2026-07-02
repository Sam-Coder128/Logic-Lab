// Input : 10 3
// Output : 14

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : On Bit At Position Demo
// Description  : Turns ON bit at given position
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);
    return (iNo | iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    iRet = OnBit(iValue,iPos);

    printf("Modified number is %u",iRet);

    return 0;
}
