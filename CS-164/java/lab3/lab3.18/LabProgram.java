/*
On a piano, a key has a frequency, say f0. Each higher key (black or white) has a frequency of f0 * r^n, where n is the distance (number of keys) from that key, and r is 2^(1/12). 

Given an initial key frequency, output that frequency and the next 4 higher key frequencies.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
System.out.printf("%.2f", yourValue);

Ex: If the input is:

    440.0

(which is the A key near the middle of a piano keyboard), the output is: 

    440.00 466.16 493.88 523.25 554.37

Note: Use one statement to compute r = 2^(1.0/12.0) using the pow function. 

Then use that r in subsequent statements that use the formula fn = f0 * rn with n being 1, 2, 3, and finally 4.
*/
import java.util.Scanner;
import java.util.ArrayList;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double r;
      double fn = scnr.nextDouble();
      System.out.printf("%.2f ",fn);
      scnr.close();
      for (double i = 1.0; i < 5.0; i++) {
         r = (fn * Math.pow(2.0, (i/12)));
         if (i > 0 && i < 4.0) {
            System.out.printf("%.2f ",r);
         } else {
            System.out.printf("%.2f\n",r);
         }
      }
   }
}