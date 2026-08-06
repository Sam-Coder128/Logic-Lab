////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Display File Contents Demo
// Input        : File name from user
// Output       : Displays contents of file
// Functions    : main()
// Description  : Accepts file name from user, opens file and displays contents
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Opens file and displays its contents.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A45q2
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(fobj.exists())
        {
            BufferedReader br = new BufferedReader(new FileReader(fobj));
            String line;
            while((line = br.readLine()) != null)
            {
                System.out.println(line);
            }
            br.close();
        }
        else
        {
            System.out.println("File not found.");
        }
    }
}
