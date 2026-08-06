////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Open File Demo
// Input        : File name from user
// Output       : Opens the file
// Functions    : main()
// Description  : Accepts file name from user and opens that file
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Opens file provided by user.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A45q1
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists())
        {
            System.out.println("File opened successfully : " + fname);
        }
        else
        {
            System.out.println("File not found.");
        }
    }
}
