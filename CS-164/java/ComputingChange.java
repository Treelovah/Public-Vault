import java.util.Scanner;

public class ComputingChange {
   public static void main(final String[] args) {
        final Scanner scnr = new Scanner(System.in);
      int amountToChange;
      int numFives;
      int numOnes;

      amountToChange = scnr.nextInt();
      scnr.close();
      numFives = amountToChange / 5;
      numOnes = amountToChange % 5;
      System.out.println(numFives);
      System.out.print("numFives: ");
      System.out.println(numFives);
      System.out.print("numOnes: ");
      System.out.println(numOnes);
   }
}