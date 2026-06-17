////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Arithmetic Operations Demo
// Input        : 10 20
// Output       : Addition : 30   Subtraction : -10   Multiplication : 200   Division : 0.5
// Description  : Performs all arithmetic operations on two integers
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void allOperations(int a, int b)
    {
        int sum = a + b;
        int diff = a - b;
        int product = a * b;
        double div = (b != 0) ? (double)a / b : 0;

        System.out.println("Addition : " + sum + "   Subtraction : " + diff + "   Multiplication : " + product + "   Division : " + div);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates all arithmetic operations.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class A22q5
{
    public static void main(String[] args)
    {
        Logic lobj = new Logic();
        lobj.allOperations(10, 20);
    }
}
