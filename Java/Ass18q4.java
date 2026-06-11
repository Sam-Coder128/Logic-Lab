////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Sum of Even and Odd Digits Demo
// Input        : Integer number
// Output       : Sum of even digits and sum of odd digits
// Methods      : sumEvenOddDigits(), System.out.println()
// Description  : Calculates sum of even digits and sum of odd digits separately
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenOddDigits(int iNo)
    {
        int evenSum = 0, oddSum = 0;
        while(iNo > 0)
        {
            int digit = iNo % 10;
            if(digit % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;
            iNo /= 10;
        }
        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits: " + oddSum);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates sum of even and odd digits.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A18q4
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.sumEvenOddDigits(123456);
    }
}
