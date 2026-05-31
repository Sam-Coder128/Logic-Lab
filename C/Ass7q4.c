////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Odd Factorial Demo
// Input        : Integer number entered by user
// Output       : Prints factorial of odd numbers up to N
// Methods      : OddFactorial(), printf(), scanf()
// Description  : Demonstrates factorial calculation restricted to odd numbers in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 15

// Input : -5
// Output : 15

// Input : 10
// Output : 945

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        if((iCnt % 2) != 0)
            iFact = iFact * iCnt;
    
    return iFact;   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates factorial of odd numbers up to a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}

/*  
Time complexity : O(N)
where N is the input number
Explanation:
The loop runs from 1 to N, and for each iteration, 
it checks if the number is odd and performs a multiplication if it is.
Therefore, the time complexity is O(N) because it processes each number up to N once.
*/
