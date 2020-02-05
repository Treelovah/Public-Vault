/*
(1) Prompt the user to input a wall's height and width. Calculate and output the wall's area. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

    Enter wall height (feet):
    12.0
    Enter wall width (feet):
    15.0
    Wall area: 180.0 square feet

(2) Extend to also calculate and output the amount of paint in gallons needed to paint the wall. Assume a gallon of paint covers 350 square feet. Store this value using a const double variable. (2 pts)

    Enter wall height (feet):
    12.0
    Enter wall width (feet):
    15.0
    Wall area: 180.0 square feet
    Paint needed: 0.5142857142857142 gallons

(3) Extend to also calculate and output the number of 1 gallon cans needed to paint the wall. Hint: Use a math function to round up to the nearest gallon. (2 pts)

    Enter wall height (feet):
    12.0
    Enter wall width (feet):
    15.0
    Wall area: 180.0 square feet
    Paint needed: 0.5142857142857142 gallons
    Cans needed: 1 can(s)

*/
import java.util.Scanner;
import java.lang.Math;     // Note: Needed for math functions in part (3)

public class PaintEstimator {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double wallHeight;
      double wallWidth;
      double wallArea;
      
      System.out.println("Enter wall height (feet):");
      wallHeight = scnr.nextDouble();
      
      wallWidth = 10.0;                      // FIXME (1): Prompt user to input wall's width
      
      // Calculate and output wall area
      wallArea = 0.0;                        // FIXME (1): Calculate the wall's area
      System.out.println("Wall area: ");     // FIXME (1): Finish the output statement
      
      // FIXME (2): Calculate and output the amount of paint in gallons needed to paint the wall
      
      // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
   }
}