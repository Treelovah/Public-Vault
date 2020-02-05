/*


Given three floating-point numbers x, y, and z, output x to the power of z, x to the power of (y to the power of z), the absolute value of y, and the square root of (xy to the power of z).

Ex: If the input is:

    3.6 4.5 2.0

the output is: 

    12.96 1.841304610218211E11 4.5 16.2

*/
import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double x = scnr.nextDouble();
      double y = scnr.nextDouble();
      double z = scnr.nextDouble();
      double a = Math.pow(x, z);
      double b = Math.pow(x, (Math.pow(y, z)));
      double c = Math.abs(y);
      double d = Math.sqrt(Math.pow((x*y),z));
      System.out.print(a + " " + b + " " + c + " " + d + '\n');
      // printf() issues.. :eyeroll: oof     
   }
}