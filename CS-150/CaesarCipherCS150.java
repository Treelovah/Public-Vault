import java.util.Scanner;

/**
 *  A simple Caesar Cipher encrypter and decrypter.
 *
 * @author YOUR NAME <br>
 *         YOUR EMAIL <br>
 *         Computer Science Department <br>
 *         Colorado State University
 * @version 201990
 */
public class CaesarCipherCS150 {

   public static void main(String[] args) {
    //    System.out.println("====== Part 1 =======");
    //    System.out.println(shift('A', 32));
       
    //    System.out.println("======= Part 2 ======");
    //    String message = "AMY POND";
    //    int key = 10;
    //    String encrypted = encrypt(message, key);
    //    String decrypted = decrypt(encrypted, key);
    //    System.out.println("Encrypted message is: " + encrypted);
    //    System.out.println("Decrypted message is: " + decrypted);
    //    System.out.println(message.equals(decrypted));
       
    //    System.out.println("====== Part 3 =======");
       Scanner scnr = new Scanner(System.in);
       run(scnr);


   }

   public static char shift(char c, int shift) {
       if (c >= (char)0 && c <= (char)127) {
           c = (char)(c + shift);
           return c;
       } else {
           return 1;
       }
    }

   public static String encrypt(String line, int shift) {
        String str = "";
        for (int i = 0; i < line.length(); i++) {
            str += shift(line.charAt(i), shift);  // UNCOMMENT!
        }
        return str;
    }

    public static String decrypt(String line, int shift) {
        return encrypt(line, -shift);
    }

    public static String getLine(Scanner scanner) { // gets a line from the client
        System.out.print("Please enter a message: ");
        return scanner.nextLine();
    }

    public static int getShift(Scanner scanner) { // gets a line and converts to an int
        System.out.print("Please enter an amount to shift: ");
        return Integer.parseInt(scanner.nextLine()); // grab the line and convert it to an int - similar to scanner.nextInt()
    }

    public static void run(Scanner scanner) {
        String line = getLine(scanner);
        if(line.equals("exit")) return;  // if the person types in "exit" we return from the run - back to the main method
        int key = getShift(scanner);
        String encrypted = encrypt(line, key);
        String decrypted = decrypt(encrypted, key);
        System.out.println();
        System.out.println("Line Entered: " + line);
        System.out.println("Encrypted: " + encrypted);
        System.out.println("Decrypted: " + decrypted);
        System.out.println("Check equal: " + line.equals(decrypted));
        // printing a couple blank lines
        System.out.println();
        System.out.println();
        run(scanner);
    }    
} // end class
