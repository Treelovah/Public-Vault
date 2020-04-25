import java.util.Scanner;

public class DetectWord {

    public static void main(String [] args) {
        Scanner scnr = new Scanner(System.in);
        String userString;
        
        userString = scnr.next();
        String response = (userString.equals("Quit")) ? "Goodbye" : "Hello";
        System.out.print(response);
        scnr.close();    
    }
}