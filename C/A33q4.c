// Input : “Marvellous Multi OS”
// M
// Output : 11
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
// Program      : Last Occurrence of Character Demo
// Description  : Finds index of last occurrence of given character
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iPos = 0, iLast = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iPos;
        }
        str++;
        iPos++;
    }
    return iLast;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Finds last occurrence of character.
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}
