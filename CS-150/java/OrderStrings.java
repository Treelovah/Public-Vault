import java.util.Scanner;

public class OrderStrings {
   public static void main (String [] args) {
      Scanner scnr = new Scanner(System.in);
      String firstString;
      String secondString;

      firstString  = "marshall";//scnr.next();
      secondString = "Marshall";//scnr.next();

      String response = (firstString.compareToIgnoreCase(secondString) < 97) ? "Yes" : "no";
      System.out.println(response);
      scnr.close();
   }
}