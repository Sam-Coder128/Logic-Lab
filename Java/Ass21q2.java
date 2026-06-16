////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Count Even and Odd Numbers Demo
// Input        : 50
// Output       : Even Count : 25   Odd Count : 25
// Description  : Counts even and odd numbers from 1 to given number
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countEvenOdd(int iNo)
    {
        int iCnt = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }
        }

        System.out.println("Even Count : " + iEvenCnt + "   Odd Count : " + iOddCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates counting even and odd numbers.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A21q2
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.countEvenOdd(50);
    }
}
