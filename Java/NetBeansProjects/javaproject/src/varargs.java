/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
public class varargs {

    static void fun(int... v) {
        System.out.println("argument is:" + v.length);
        int max = 0, min = 0, temp;
        int l = v.length, sum = 0;
        for (int i = 0; i < l; i++) {

            for (int j = i + 1; j < l; j++) {

                if (v[i] > v[j]) {
                    temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
            sum += v[i];
        }
            System.out.println("Maximum is:" + v[l - 1]);
            System.out.println("Minimum is:" + v[0]);
            System.out.println("Average is:" + (double)sum/l);
      
    }

    public static void main(String args[]) {
        fun(1, 2, 5, 4, 3);
        fun(1, 2, 4, 3);
        fun(3,5,6);
    }
}
