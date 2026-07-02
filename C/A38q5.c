// Toggle contents of first and last nibble of the number
// Input : e.g. 305419896 (0x12345678)
// Output : modified number with first and last nibble toggled

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Toggle First and Last Nibble Demo
// Description  : Toggles contents of first and last nibble (4 bits each)
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;   // Mask for first nibble (lowest 4 bits) and last nibble (highest 4 bits)
    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is %u",iRet);

    return 0;
}
