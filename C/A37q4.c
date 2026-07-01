// Input : 10 3
// Output : 14

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Toggle Bit At Position Demo
// Description  : Toggles bit at given position
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);
    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter position : ");
    scanf("%d",&iPos);

    iRet = ToggleBit(iValue,iPos);

    printf("Modified number is %u",iRet);

    return 0;
}
