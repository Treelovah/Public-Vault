// import java.util.Random; File Dependant
import java.util.Scanner;
import java.io.File; // this was deleted...whoops. I have no way of recovering.

class Lab17 {
    public static void readFileAndCalcAverage(String filename) {

        try {

            Scanner fileReader = new Scanner(new File(filename));

            int index = 0, sum = 0;

            while (fileReader.hasNextLine()) {

                // fileData[index] = fileReader.nextInt(); File Dependant

                fileReader.nextLine();

                index++; // Added this line!!!

            }

            // for (int i = 0; i < fileData.length; i++) // File Dependant

                // sum += fileData[i]; // File Dependant

            fileReader.close();

            // System.out.println(sum / fileData.length); // File Dependant

        } catch (Exception e) {

            System.out.println("File error.");

        }

    }
}