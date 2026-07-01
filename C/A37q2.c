// Input : 10 2
// Output : 8

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Off Bit At Position Demo
// Description  : Turns OFF bit at given position
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = ~(1 << (iPos - 1));
    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    iRet = OffBit(iValue,iPos);

    printf("Modified number is %u",iRet);

    return 0;
}
