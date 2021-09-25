/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package upload;

/**
 *
 * @author anil kumar
 */
import java.io.*;

class Q7
{
    public static void main(String args[])
    {
        String str;

        if(args.length!=1)
        {
            System.out.print("usage: showfile file");
            return;
        }

        try(BufferedReader b = new BufferedReader(new FileReader(args[0])))
        {
            str=b.readLine();
            while(str!=null)
            {
                if(str.charAt(0)=='/'&&str.charAt(1)=='/')
                {
                    System.out.print(str);
                }
                str=b.readLine();
            }
        }
        catch(IOException e)
        {
            System.out.print("Exception occur");
        }
    }
}