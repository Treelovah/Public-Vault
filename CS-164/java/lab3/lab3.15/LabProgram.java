/*
/
/
/  Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, and output the gas cost for 20 miles, 75 miles, and 500 miles.
/
/  Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
/  System.out.printf("%.2f", yourValue);
/
/  The output ends with a newline.
/
/  Ex: If the input is:
/   20.0 3.1599
/
/  The output is:
/   3.16 11.85 79.00
/
/  Note: Real per-mile cost would also include maintenance and depreciation. 
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      
      double mpg = scnr.nextDouble(); //mpg == miles per gallon
      double gdpg = scnr.nextDouble(); //gdpg == gas dollars per gallon
      double answer;
      double[] pre_sets = {20, 75, 500};
      for (int i = 0; i < 3; i++) {
         answer = (gdpg / mpg) * pre_sets[i];
         if (i < 2) {
            System.out.printf("%.2f ",answer);
         } else {
            System.out.printf("%.2f\n",answer);
         }
      }
   }
}