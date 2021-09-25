/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical1;

/**
 *
 * @author anil kumar
 */
import java.io.*;

class filecopy {

    public static void main(String args[]) {
        int i;
        FileInputStream fin;
        FileOutputStream fout;
        BufferedReader b;
        try {
            fin = new FileInputStream("file1.txt");
            fout = new FileOutputStream("file2.txt");
            b = new BufferedReader(new FileReader("file1.txt"));
        } catch (FileNotFoundException e) {
            System.out.print("File  not found");
            return;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("  usage : showfile file");
            return;
        }
        try {
            do {
                String str = b.readLine();
                i = fin.read();

                char ch = (char) i;
                String s;

                if (i != -1) {
                    if (str.indexOf(ch, 0) % 2 == 0) {
                        fout.write((char) i);
                    }
                }
            } while (i != -1);
        } catch (IOException e) {
            System.out.print("error on reading");
        }

        try {
            fin.close();
            fout.close();
        } catch (IOException e) {
            System.out.print("error on closing");
        }
    }
}
