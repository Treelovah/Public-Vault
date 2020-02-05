/*
(1) Prompt the user to input an integer, a double, a character, and a string, storing each into separate variables. Then, output those four values on a single line separated by a space. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

    Enter integer:
    
    99
    Enter double:
    3.77
    Enter character:
    z
    Enter string:
    Howdy
    99 3.77 z Howdy

(2) Extend to also output in reverse. (1 pt)

    Enter integer:
    99
    Enter double:
    3.77
    Enter character:
    z
    Enter string:
    Howdy
    99 3.77 z Howdy
    Howdy z 3.77 99


(3) Extend to cast the double to an integer, and output that integer. (2 pts)

    Enter integer:
    9
    Enter double:
    3.77
    Enter character:
    z
    Enter string:
    Howdy
    99 3.77 z Howdy
    Howdy z 3.77 99
    3.77 cast to an integer is 3

*/
import java.util.Scanner;

public class BasicInput {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int userInt;
      double userDouble;
      char userChar;
      String userString;

      // Finish reading other items into variables, then output the four values on a single line separated by a space
      System.out.println("Enter integer:");
      userInt = scnr.nextInt();
      System.out.println("Enter double:");
      userDouble = scnr.nextDouble();
      System.out.println("Enter character:");
      userChar = scnr.next().charAt(0);
      System.out.println("Enter string:");
      userString = scnr.next();
      System.out.printf("%d %.2f %c %s\n",userInt,userDouble,userChar,userString);

      // Output the four values in reverse
      System.out.printf("%s %c %.2f %d\n",userString, userChar, userDouble, userInt);
      // Cast the double to an integer, and output that integer
      System.out.printf("%.2f cast to an integer is %d\n",userDouble,(int)userDouble);
   }
}