/*
Given a long integer representing a 10-digit phone number, output the area code, prefix, and line number using the format (800) 555-1212.

Ex: If the input is:

    8005551212

the output is:

    (800) 555-1212

Hint: Use % to get the desired rightmost digits. Ex: The rightmost 2 digits of 572 is gotten by 572 % 100, which is 72.

Hint: Use / to shift right by the desired amount. Ex: Shifting 572 right by 2 digits is done by 572 / 100, which yields 5. (Recall integer division discards the fraction).

For simplicity, assume any part starts with a non-zero digit. So 0119998888 is not allowed. 
*/
import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      String phoneNumber;
      phoneNumber = scnr.next();
      scnr.close();
      String first_set_number = phoneNumber.substring(0, 3);
      String second_set_number = phoneNumber.substring(3, 6);
      String last_set_number = phoneNumber.substring(6, 10);
      System.out.println(String.format("(%s) %s-%s",first_set_number, second_set_number, last_set_number));          
   }
}
