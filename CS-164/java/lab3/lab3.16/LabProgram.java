/*
/  The following equations estimate the calories burned when exercising (source):
/
/  Women: Calories = ( (Age x 0.074) — (Weight x 0.05741) + (Heart Rate x 0.4472) — 20.4022 ) x Time / 4.184
/
/  Men: Calories = ( (Age x 0.2017) + (Weight x 0.09036) + (Heart Rate x 0.6309) — 55.0969 ) x Time / 4.184
/
/  Write a program using inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), respectively. Output calories burned for women and men.
/
/  Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
/  System.out.printf("%.2f", yourValue);
/
/  Ex: If the input is:
/
/    49 155 148 60

/  The output is:
/
/    Women: 580.94 calories
/    Men: 891.47 calories
*/
import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      
      Scanner scnr = new Scanner(System.in);
      double age = scnr.nextDouble(); //years
      double weight = scnr.nextDouble();
      double heart_rate = scnr.nextDouble();
      double time = scnr.nextDouble(); //minutes
      double men_calories = ((age * 0.2017) + (weight * 0.09036) + (heart_rate * 0.6309) - 55.0969) * time / 4.184;
      double women_calories = ((age * 0.074) - (weight * 0.05741) + (heart_rate * 0.4472) - 20.4022) * time / 4.184;
      System.out.printf("Women: %.2f calories\nMen: %.2f calories\n",women_calories, men_calories);
      scnr.close();
   }
}