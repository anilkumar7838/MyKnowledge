/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eventhandling;

/**
 *
 * @author anil kumar
 */
import java.io.*;
public class file {
    public static void main(String args[])throws IOException
    {
        int i;
        FileInputStream fin;
        try{
        fin=new FileInputStream(args[0]);
        }
        catch(FileNotFoundException e){
        System.out.println("file not found");
        return;
        }
        catch(ArrayIndexOutOfBoundsException e){
        System.out.println("usage:showfile file");
        return;
        }
        do{
        i=fin.read();
        if(i!=-1)
         System.out.println((char)i);
        }while(i!=-1);
        fin.close();
    }
}
