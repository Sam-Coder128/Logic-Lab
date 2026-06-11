////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Prime Number Check Demo
// Input        : Integer number
// Output       : Whether the number is prime or not
// Methods      : chkPrime(), System.out.println()
// Description  : Checks if a given number is prime
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void chkPrime(int iNo)
    {
        if(iNo <= 1)
        {
            System.out.println(iNo + " is not Prime");
            return;
        }
        for(int i = 2; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                System.out.println(iNo + " is not Prime");
                return;
            }
        }
        System.out.println(iNo + " is Prime");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates prime number check.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A18q1
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.chkPrime(11);
    }
}
