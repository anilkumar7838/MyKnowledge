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

class filecopy
{
    public static void main(String args[])
    {
        int i;
        FileInputStream fin;
        FileOutputStream fout;

        try
        {
            fin = new FileInputStream(args[0]);
            fout = new FileOutputStream(args[1]);
        }
        catch(FileNotFoundException e)
        {
            System.out.print("File  not found");
            return;
        }
        catch(ArrayIndexOutOfBoundsException e){
        System.out.println("  usage : showfile file");
        return;
        }
        try
        {
            do
            {
                i=fin.read();
                if(i!=-1)
                {
                    
                    fout.write((char)i);
                }
            }while(i!=-1);
        }
        catch(IOException e)
        {
            System.out.print("error on reading");
        }

        try
        {
            fin.close();
            fout.close();
        }
        catch(IOException e)
        {
            System.out.print("error on closing");
        }
    }
}
