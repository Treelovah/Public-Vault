import java.util.Random;

public class SeatSwap {
    public static void main(String[] args) {
        Random randGen = new Random();
        int rowNumL;
        int colNumL;
        int rowNumR;
        int colNumR;

        // Switch a student
        // from a random seat on the left (cols 1 to 15)
        // to a random seat on the right (cols 16 to 30)
        // Seat rows are 1 to 20

        rowNumL = randGen.nextInt(20) + 1; // 1 to 20
        colNumL = randGen.nextInt(15) + 1; // 1 to 15

        rowNumR = randGen.nextInt(20) + 1; // 1 to 20
        colNumR = randGen.nextInt(15) + 16; // 16 to 30

        System.out.print("Move from ");
        System.out.print("row " + rowNumL + " col " + colNumL);
        System.out.print(" to ");
        System.out.println("row " + rowNumR + " col " + colNumR);
    }
}
