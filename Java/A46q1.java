////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Copy File Demo
// Input        : Two file names (source and destination)
// Output       : Copies data from source file into destination file
// Functions    : main()
// Description  : Accepts two file names, opens first file, creates second file and copies data
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Copies contents of one file into another.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A46q1
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String src = sobj.nextLine();

        System.out.print("Enter destination file name : ");
        String dest = sobj.nextLine();

        FileInputStream fis = new FileInputStream(src);
        FileOutputStream fos = new FileOutputStream(dest);

        int ch;
        while((ch = fis.read()) != -1)
        {
            fos.write(ch);
        }

        fis.close();
        fos.close();

        System.out.println("File copied successfully.");
    }
}
