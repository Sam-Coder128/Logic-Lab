////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Create Directory Demo
// Input        : Directory name from user
// Output       : Creates directory
// Functions    : main()
// Description  : Accepts directory name and creates directory
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Creates directory with given name.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A46q3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sobj.nextLine();

        File dir = new File(dname);

        if(dir.mkdir())
        {
            System.out.println("Directory created successfully.");
        }
        else
        {
            System.out.println("Unable to create directory.");
        }
    }
}
