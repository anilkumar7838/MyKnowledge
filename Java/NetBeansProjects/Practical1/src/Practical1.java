/*name=anilkumar
  bsc(H)Computer Science
  SUBJECT=JAVA PROGRAMMING
  19HCS4068*/
import java.util.Scanner;
import java.io.*;

class OverWeight extends Exception {
    private float weight;

   
    OverWeight(float weight) {
        this.weight = weight;
    }

    
    public String toString() {
        return ("Over Weight: " + weight);
    }
}

class exceptionDemo {

    
    static void test(float weight) throws OverWeight{
        System.out.println("Entering test()...");
        if(weight > 90)
            throw new OverWeight(weight);
        System.out.println("Exiting test()...");
    }

    // Defining a variable length argument method to print its statistics
    static void varM(int ... var) {
        int max = var[0], min = var[0], sum = 0;
        float average;

        for(int x : var) {
            if(x > max)
                max = x;
            if(x < min)
                min = x;
            sum += x;
        }

        average = sum / var.length;

        System.out.println("Maximum: " + max + "\nMinimum: " + min + "\nAverage: " + average);
    }

    static void fileCopy(String copyFile, String pasteFile) {
        FileInputStream fin;
        FileOutputStream fout;
        int character, counter = 0;

        try {
            fin = new FileInputStream(copyFile);
            fout = new FileOutputStream(pasteFile);
            
            do {
                character = fin.read();
                counter++;
                if(character != -1 && counter % 2 == 1)
                    fout.write((char)character);
            }while(character != -1);
            
            fin.close();
            fout.close();
            
        } catch(FileNotFoundException E) {
            System.out.println("Can't open File!!!");
            System.exit(0);
        } catch(IOException E) {
            System.out.println("Error Copying File!!!");
        }       
    }
}

public class Practical1 {
    
   
    public static void main(String[] args) {
        int n;
        char c ;
        Scanner sc = new Scanner(System.in);

        do {
            System.out.println("*****Menu*****");
            System.out.println("1. Exception Class" + "\n2. Variable length argument Method" + "\n3. File handling");
            System.out.print("Choose your option: ");
            n = sc.nextInt();

            switch(n) {
                case 1: {
                    float weight;
                    System.out.print("Enter the weight: ");
                    weight = sc.nextFloat();

                    try {
                        exceptionDemo.test(weight);
                    } catch(OverWeight Ob) {
                        System.out.println("Exception Caught: " + Ob);
                    }

                    break;
                }

                case 2: {
                    System.out.println(" arguments are (1, 2, 3, 4, 5)");
                    exceptionDemo.varM(1, 2, 3, 4, 5);

                    System.out.println("arguments are (2, 5, 9, 7, 3");
                    exceptionDemo.varM(2, 5, 9,7,3);

                    break;
                }

                case 3: {
                    if(args.length != 2) {                                      // Checking for Command Line Arguments
                        System.out.println("File Names Not Found!!!");          // Use complete path in Command Line Arguments
                        break;
                    }

                    exceptionDemo.fileCopy(args[0], args[1]);

                    break;
                }
            }

            System.out.print("Do you want to operate more (Y/N): ");
            c = sc.next().charAt(0);

            
        } while (c == 'Y' || c == 'y');

    }
}