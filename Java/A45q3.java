////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Write Data to File Demo
// Input        : File name from user
// Output       : Writes data at end of file
// Functions    : main()
// Description  : Accepts file name from user, opens file in write mode and appends data
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Opens file and writes data at the end.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A45q3
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        FileWriter fw = new FileWriter(fname, true);
        BufferedWriter bw = new BufferedWriter(fw);

        System.out.print("Enter data to append : ");
        String data = sobj.nextLine();

        bw.write(data);
        bw.newLine();

        bw.close();
        fw.close();

        System.out.println("Data written successfully.");
    }
}
