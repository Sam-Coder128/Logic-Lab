// Input : “Marvellous Multi OS”
// M
// Output : 2
//
// Input : “Marvellous Multi OS”
// W
// Output : 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Count Character Frequency Demo
// Description  : Counts frequency of given character in string
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Counts frequency of character in string.
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}
