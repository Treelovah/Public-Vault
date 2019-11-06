import java.util.Random;

public class SeededRandomValues {
    public static void main(String[] args) {
        Random randGen = new Random(); // Seed with 15
        System.out.println(randGen.nextInt(4) + 18);
        System.out.println(randGen.nextInt());
        System.out.println(randGen.nextInt());
    }
}
