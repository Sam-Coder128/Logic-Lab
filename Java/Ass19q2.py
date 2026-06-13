////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Display Grade Demo
// Input        : Marks (integer)
// Output       : Grade based on marks
// Methods      : displayGrade(), System.out.println()
// Description  : Displays grade according to marks
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void displayGrade(int iMarks)
    {
        if(iMarks >= 90)
            System.out.println("Grade: A+");
        else if(iMarks >= 75)
            System.out.println("Grade: A");
        else if(iMarks >= 60)
            System.out.println("Grade: B");
        else if(iMarks >= 40)
            System.out.println("Grade: C");
        else
            System.out.println("Grade: Fail");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates grade display based on marks.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A19q2
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.displayGrade(82);
    }
}
