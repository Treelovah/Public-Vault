import java.util.Random;
import java.util.Scanner;
import java.io.File;

class Lab17 {
    public static void readFileAndCalcAverage(String filename) {

        try {

            Scanner fileReader = new Scanner(new File(filename));

            int index = 0, sum = 0;

            while (fileReader.hasNextLine()) {

                fileData[index] = fileReader.nextInt();

                fileReader.nextLine();

                index++; // Added this line!!!

            }

            for (int i = 0; i < fileData.length; i++)

                sum += fileData[i];

            fileReader.close();

            System.out.println(sum / fileData.length);

        } catch (Exception e) {

            System.out.println("File error.");

        }

    }
}