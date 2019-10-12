import java.util.Random;
import java.util.Scanner;

/**
 * 
 * Basic magic 8 ball, with an equal number of options in each category. Teaches 
 * basic if / else statements.
 * 
 * 
 * @author Marshall Livingston <br>
 *         mltechi@rams.colostate.edu <br>
 *         Computer Science Department <br>
 *         Colorado State University
 * @version 201990
 */
public class EightBall {
    private static Scanner scanner = new Scanner(System.in);
    private static Random rnd = new Random();


    public static String getAnswer(int category, int answer) {
    
        if (category >= 74) {
            if (answer == 0) {
                return "As I see it, yes.";
            } else if (answer == 1) {
                return "Signs point to yes.";
            } else if (answer == 2) {
                return "Outlook good.";
            } else if (answer == 3) {
                return "Without a doubt.";
            } else if (answer == 4) {
                return "You may rely on it.";
            }
            return "Does not compute";    
        } else if (category >= 24) {
            if (answer == 0) {
                return "Reply hazy, try again.";
            } else if (answer == 1) {
                return "Ask again later.";
            } else if (answer == 2) {
                return "Better not tell you now.";
            } else if (answer == 3) {
                return "Cannot predict now.";
            } else if (answer == 4) {
                return "Concentrate and ask again.";
            }            
            return "Does not compute";
        } else if (category < 24) {
            if (answer == 0) {
                return "Don't count on it.";
            } else if (answer == 1) {
                return "My reply is no.";
            } else if (answer == 2) {
                return "My sources say no.";
            } else if (answer == 3) {
                return "Outlook not so good.";
            } else if (answer == 4) {
                return "Very doubtful.";
            }            
            return "Does not compute";
        } else {
            return "Does not compute";
        }
    }
// ************** don't modify below this line ************************
    public static void main(String[] args) {
        printSpash();
        run();
    }

    public  static void printSpash() {
        System.out.println("88888888888888888888");
        System.out.println("8   Magic 8 Ball   8");
        System.out.println("8    Ask away      8");
        System.out.println("88888888888888888888");
        System.out.println("\nAnd the answer is...\n");
    }

    public static void run() {
        int cat = rnd.nextInt(100);
        int an = rnd.nextInt(5);
        System.out.println("category num: " + cat + " answer num: " + an);
        System.out.println(getAnswer(cat, an)); // gets 0-99 and 0-4 (one less than what you put in)
        System.out.println();
        System.out.print("Ask another question (Yes/No?): ");
        String input = scanner.nextLine();
        if(input.toLowerCase().startsWith("n"))  { // this ia fun trick, worth remembering it.
            System.out.println("Thank you for playing!");
            return;
        }
        System.out.println("\nAnd the answer is...\n");
        run(); // continue looping!
    }

}
