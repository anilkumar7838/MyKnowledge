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
            fin = new FileInputStream("file1.txt");
            fout = new FileOutputStream("file2.txt");
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
