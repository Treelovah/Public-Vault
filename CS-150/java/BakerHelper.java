import java.util.Random;

/**
 *
 *  <h1> CS 150 -Methods, Conditionals, and Math with Cake! </h1>
 *
 *   <h2> Topics Covered: </h2>
 *   <ul>
 *   		<li>Method declaration and body practice</li>
 *   		<li>If conditional practice</li>
 *   	    <li>Complex If Statements</li>
 *   		<li>Constant introduction</li>
 *   		<li>Math class method practice</li>
 *   		<li>Division and modulo introduction<li>
 *   </ul>
 *
 * @author Marshall Livingston<br>
 *         mltechi@rams.colostate.edu <BR>
 *         Computer Science Department <br>
 *         Colorado State University
 * @version 201990
 */
public class BakerHelper {
   public static final Random RND = new Random(); // do not modify, but use as an example of a class variable  
   
   // declare your class-level variables here
   public static final double CUPS_FLOUR_PER_CAKE = 2.3;
   public static final int PIECES_PER_CAKE = 8;
   public static final int NOT_ENOUGH_FLOUR = -1;
   public static final int EXACT_CAKE = 0;
   public static final int EXTRA_CAKE = 1;
   // declare your methods here
   public static int calcNumCakesBaked(double cupsOnHand) {
       double cakeD = cupsOnHand / CUPS_FLOUR_PER_CAKE;
       int cakes = (int)cakeD;
       return cakes;
   }
   
   public static int getCakeEnthusiasts(int partySize) {
       return partySize % 20;
   }

   public static String getMessage(int messageId) {
       if (messageId < 0) {
           return "Sorry. You do not have enough flour to bake a cake.";
       } else if (messageId == 0) {
           return "No left over cake.";
       } else if (messageId > 0) {
           return "Yay, left over cake!";
       } else {
           return "Error-->contact Albert Lionelle for debugging ^_^";
       }
   }

    public static int determineLeftoverCake(int cakes, int people) {
       int numPiecesCake = PIECES_PER_CAKE * cakes;
       if (cakes <= 0 || numPiecesCake < people) {
           return NOT_ENOUGH_FLOUR;
       } else if (people > 0 && (numPiecesCake - people) == 0) {
           return EXACT_CAKE;
       } else {
           return EXTRA_CAKE;
       }
    }
   
   public static void main(String[] args) {
      // add your own tests here
      System.out.println(CUPS_FLOUR_PER_CAKE);
      System.out.println(PIECES_PER_CAKE);

      System.out.println("#### Testing calcNumCakesBaked ####");
      System.out.println(calcNumCakesBaked(0));
      System.out.println(calcNumCakesBaked(2.3));
      System.out.println(calcNumCakesBaked(3));
      System.out.println(calcNumCakesBaked(42));

      System.out.println("#### Testing getCakeEnthusiasts ####");
      System.out.println(getCakeEnthusiasts(21));
      System.out.println(getCakeEnthusiasts(3));
      System.out.println(getCakeEnthusiasts(20));
      System.out.println(getCakeEnthusiasts(42));

      System.out.println("### TESTING getMessage ###");
      System.out.println(getMessage(-1));
      System.out.println(getMessage(0));
      System.out.println(getMessage(1));

      System.out.println("### Testing determineLeftoverCake ###");
      System.out.println(determineLeftoverCake(10, 10));
      System.out.println(determineLeftoverCake(10, 80));
      System.out.println(determineLeftoverCake(0, 9));
      System.out.println(determineLeftoverCake(1, 8));
      randomTests(); // uncomment when mostly done  
   }
   
   
   static void randomTests() {
        for(int i = 0; i < 20; i++) {
            System.out.println(getMessage(determineLeftoverCake(calcNumCakesBaked(getCupsOnHand()),
                                                                getCakeEnthusiasts(getRSVP()))));
        }
    }
   
   // do not edit
   /**
    * Gets a random number of people who are attending the party
    * @returns random whole number from 0-99 of party goers
    **/
    public static int getRSVP() {
        return RND.nextInt(100);
    }

   /**
    * Gets a random number of cups of flour to see how much to have
    * @returns  random double number between 0-9
    **/
    public static double getCupsOnHand() {
        return RND.nextInt(10) + RND.nextDouble();
    }
    
}