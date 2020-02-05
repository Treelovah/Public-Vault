/*
Given two input integers for an arrowhead and arrow body, print a right-facing arrow.

Ex: If the input is:

    0 1

the output is: 

    1
     11
00000111
000001111
00000111
     11
     1

*/
import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in); 
      int baseChar = scnr.nextInt(); 
      int headChar = scnr.nextInt();
      System.out.println(String.format("     %d",headChar));
      System.out.println(String.format("     %d%d",headChar,headChar));
      System.out.println(String.format("%d%d%d%d%d%d%d%d",baseChar,baseChar,baseChar,baseChar,baseChar,headChar,headChar,headChar));
      System.out.println(String.format("%d%d%d%d%d%d%d%d%d",baseChar,baseChar,baseChar,baseChar,baseChar,headChar,headChar,headChar,headChar));
      System.out.println(String.format("%d%d%d%d%d%d%d%d",baseChar,baseChar,baseChar,baseChar,baseChar,headChar,headChar,headChar));
      System.out.println(String.format("     %d%d",headChar,headChar));
      System.out.println(String.format("     %d",headChar));
   }  
}
