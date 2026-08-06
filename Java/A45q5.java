////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : List Directory Files Demo
// Input        : Directory name from user
// Output       : Displays all file names from directory
// Functions    : main()
// Description  : Accepts directory name from user and displays all file names
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays all files from given directory.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A45q5
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sobj.nextLine();

        File dir = new File(dname);

        if(dir.isDirectory())
        {
            String[] files = dir.list();
            System.out.println("Files in directory : ");
            for(String file : files)
            {
                System.out.println(file);
            }
        }
        else
        {
            System.out.println("Invalid directory.");
        }
    }
}
