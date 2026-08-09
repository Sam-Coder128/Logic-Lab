////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Write Data with File Names & Sizes to Marvellous.txt Demo
// Input        : Directory name from user
// Output       : Writes data of all files along with file names & sizes into Marvellous.txt
// Functions    : main()
// Description  : Accepts directory name and writes data of all files with names & sizes into Marvellous.txt
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Writes data of all files with their names & sizes into Marvellous.txt.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A47q5
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
                if(f.isFile())
                {
                    bw.write("File : " + f.getName() + " Size : " + f.length() + " bytes");
                    bw.newLine();

                    BufferedReader br = new BufferedReader(new FileReader(f));
                    String line;
                    while((line = br.readLine()) != null)
                    {
                        bw.write(line);
                        bw.newLine();
                    }
                    br.close();
                    bw.newLine();
                }
            }

            bw.close();
            System.out.println("Data with file names & sizes written to Marvellous.txt successfully.");
        }
        else
        {
            System.out.println("Invalid directory.");
        }
    }
}
