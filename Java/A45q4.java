////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Create File Demo
// Input        : File name from user
// Output       : Creates new file if not existing
// Functions    : main()
// Description  : Accepts file name from user and creates new file if it does not exist
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Creates new file if not existing.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A45q4
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.createNewFile())
        {
            System.out.println("File created successfully : " + fname);
        }
        else
        {
            System.out.println("File already exists.");
        }
    }
}
