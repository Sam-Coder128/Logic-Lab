////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Perfect Number Check Demo
// Input        : 6
// Output       : Perfect Number
// Description  : Checks if a given number is perfect (sum of factors equals number)
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not Perfect Number");
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates perfect number check.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A20q3
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.checkPerfect(6);
    }
}
