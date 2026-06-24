// Input : Q
// Output : Q R S T U V W X Y Z
//
// Input : m
// Output : m l k j i h g f e d c b a
//
// Input : 8
// Output :

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Display Sequence of Characters Demo
// Description  : Displays sequence of alphabets forward if capital, backward if small
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays sequence of alphabets.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
