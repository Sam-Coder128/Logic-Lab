////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : File Checksum Demo
// Input        : File name from user
// Output       : Displays checksum of file
// Functions    : main()
// Description  : Accepts file name and calculates checksum
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;
import java.security.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates checksum of given file.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class A46q4
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        FileInputStream fis = new FileInputStream(fname);
        MessageDigest md = MessageDigest.getInstance("MD5");

        byte[] buffer = new byte[1024];
        int bytesRead;

        while((bytesRead = fis.read(buffer)) != -1)
        {
            md.update(buffer, 0, bytesRead);
        }

        fis.close();

        byte[] digest = md.digest();

        StringBuilder sb = new StringBuilder();
        for(byte b : digest)
        {
            sb.append(String.format("%02x", b));
        }

        System.out.println("Checksum (MD5) : " + sb.toString());
    }
}
