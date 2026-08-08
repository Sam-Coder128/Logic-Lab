////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : List Regular Files Demo
// Input        : Directory name from user
// Output       : Displays all regular files from directory
// Functions    : main()
// Description  : Accepts directory name and displays only regular files
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays regular files from given directory.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A47q1
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
            System.out.println("Regular files in directory : ");
            for(File f : files)
            {
                if(f.isFile())
                {
                    System.out.println(f.getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory.");
        }
    }
}
