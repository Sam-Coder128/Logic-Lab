////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Palindrome Check Demo
// Input        : Integer number
// Output       : Whether the number is palindrome or not
// Methods      : chkPalindrome(), System.out.println()
// Description  : Checks if a given number is palindrome
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void chkPalindrome(int num)
    {
        int temp = num, rev = 0;
        while(temp > 0)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        if(rev == num)
            System.out.println(num + " is Palindrome");
        else
            System.out.println(num + " is not Palindrome");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates palindrome check.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A17q2
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.chkPalindrome(101);
    }
}
