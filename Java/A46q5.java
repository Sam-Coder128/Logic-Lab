////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Directory Files with Size Demo
// Input        : Directory name from user
// Output       : Displays all file names and their sizes
// Functions    : main()
// Description  : Accepts directory name and displays file names with sizes
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays all files in directory with their sizes.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A46q5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sobj.nextLine();

        File dir = new File(dname);

        if(dir.isDirectory())
        {
            File[] files = dir.listFiles();
            System.out.println("Files in directory : ");
            for(File f : files)
            {
                System.out.println(f.getName() + " \t Size : " + f.length() + " bytes");
            }
        }
        else
        {
            System.out.println("Invalid directory.");
        }
    }
}
