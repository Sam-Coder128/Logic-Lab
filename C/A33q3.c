// Input : “Marvellous Multi OS”
// M
// Output : 0
//
// Input : “Marvellous Multi OS”
// W
// Output : -1
//
// Input : “Marvellous Multi OS”
// e
// Output : 4

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : First Occurrence of Character Demo
// Description  : Finds index of first occurrence of given character
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }
        str++;
        iPos++;
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Finds first occurrence of character.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}
