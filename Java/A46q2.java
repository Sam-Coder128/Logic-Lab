////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check Regular File Demo
// Input        : File name from user
// Output       : Displays whether file is regular file or not
// Functions    : main()
// Description  : Accepts file name and checks if it is a regular file
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Checks if given file is regular.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A46q2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.isFile())
        {
            System.out.println("It is a regular file.");
        }
        else
        {
            System.out.println("It is not a regular file.");
        }
    }
}
