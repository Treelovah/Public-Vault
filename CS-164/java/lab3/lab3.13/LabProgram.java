/* Write a program using integers userNum and x as input, and output userNum divided by x three times.
Ex: If the input is:
    2000 2
the output is:
    1000 500 250
no extra whitespace, the end must be a newline. go
*/
import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      
      int userNum = scnr.nextInt();
      int x = scnr.nextInt();
      int a = 0;
      for (int i = 0; i < 3; i++) {
         if (a < 2) {
            userNum = (userNum / x);
            System.out.printf("%d ",userNum);
            a++;
         } else {     //Literally had to make this cuz of the whitespace rule in class ¯\_(ツ)_/¯
            userNum = (userNum / x);
            System.out.println(userNum);
         }
      }
   }
}