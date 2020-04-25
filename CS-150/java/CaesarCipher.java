import java.util.Scanner;

/**
 *  A simple Caesar Cipher encrypter and decrypter.
 *
 * @author Marshall Livingston <br>
 *         mltechi@rams.colostate.edu <br>
 *         Computer Science Department <br>
 *         Colorado State University
 * @version 201990
 */
public class CaesarCipher {

   
  static void shift(int shift, String message) {        // This shift method takes 3 arguments: a char, an int, and a String of which to encrypt with ROT cipher ) 
    message = message.toLowerCase(); 
    for (int i = 0; i < message.length(); ++i) {
      char newChar = message.charAt(i);
      if (newChar >= (char)0 && newChar <= (char)127) {
        newChar = (char)(newChar + shift);
        System.out.print((char)newChar);
      } else {
          System.out.print("Nice job, you broke it.");
        break;
        
      }
    }
  }

  static void unShift(int shift, String message) {
    message = message.toLowerCase();
    for (int i = 0; i < message.length(); ++i) {
      char newChar = message.charAt(i);
      if (newChar >= (char)0 && newChar <= (char)127) {
        newChar = (char)(newChar - shift);
        System.out.print((char)newChar);
      } else {
          System.out.print("Nice job, you broke it.");
        break;
      }    
    }
  }

  public static void main(String[] args) {
    Scanner scnr = new Scanner(System.in);
    shift(2, scnr.nextLine());
    System.out.println();
    unShift(2, scnr.nextLine());
    scnr.close();
  }
}
