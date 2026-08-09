////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Write File Names to Marvellous.txt Demo
// Input        : Directory name from user
// Output       : Writes all file names into Marvellous.txt
// Functions    : main()
// Description  : Accepts directory name and writes names of all files into Marvellous.txt
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Writes file names into Marvellous.txt.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A47q2
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sobj.nextLine();

        File dir = new File(dname);

        if(dir.isDirectory())
        {
            File[] files = dir.listFiles();
            BufferedWriter bw = new BufferedWriter(new FileWriter("Marvellous.txt"));

            for(File f : files)
            {
                bw.write(f.getName());
                bw.newLine();
            }

            bw.close();
            System.out.println("File names written to Marvellous.txt successfully.");
        }
        else
        {
            System.out.println("Invalid directory.");
        }
    }
}
