import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

/**
 * <h1>Practical 2: Salary Data based on majors with demographic
 * differences</h1>
 *
 * The purpose of this practical is to encourage students to build the front end
 * on a salary program that is looking at 2017 census data. They will use the
 * SalaryData object which is the data access object, and query that object
 * using a set number of methods.
 *
 *
 *
 * @author Albert Lionelle <br>
 *         lionelle@colostate.edu <br>
 *         Computer Science Department <br>
 *         Colorado State University
 * @version 201910
 */
public class SalaryAnalysis {
    // NO BUGS RIGHT BELOW HERE
    private final static NumberFormat CURRENCY_FMT = NumberFormat.getCurrencyInstance(Locale.US); // it is final because
                                                                                                  // we never want to
                                                                                                  // change it, so
                                                                                                  // prevents that from
                                                                                                  // happening

    private SalaryData data = new SalaryData("salary_data.csv"); // this variable is used throughout your code to access
                                                                 // the data.
    private Scanner scanner = new Scanner(System.in);

    // NO BUGS UP THERE HERE ^^

    /**
     * Use this method to test your other methods - that way you don't hav to go
     * through the full menu system as you develop one line at a time. In the main
     * method, you should uncomment the call to this before you submit your final
     * program. (or comment out all lines in this method)
     *
     * This is purposely fairly empty - as it is for you to use.
     */
    public void testMethod() { // NO BUGS IN HERE
        // Add to this method to make sure all the methods are work properly!
        System.out.println("Printing first major to make sure data set loads: " + data.getMajor(0));
        prettyPrint(0);
    }

    /**
     * This method will cycle through all salaries in order. To allow reading to be
     * easier, you should call {@link #prettyPrint(int)} on every major.
     *
     * It is useful to know that calling data.size() will return the total number of
     * majors that are being tracked in the salary data. If you have 27 majors, it
     * will return 27, even though you should loop from 0 to 26.
     *
     */
    public void listAll() { // You implemented this in the last lab -- NO BUGS IN HERE
        System.out.println(getHeader());
        for (int i = 0; i < data.size(); i++) {
            prettyPrint(i);
        }
    }

    /**
     * Prints out a single line of Salary Data using a pretty print style format The
     * format is as follows.
     * 
     * <pre>
     *     DataID.  Major  Average Male Salary  Average Female Salary  Average White Salary Average PoC Salary  Average Salary  Percent Male    Percent Female Percent White Percent PoC
     * </pre>
     *
     * here is an example using Ag. Science
     * 
     * <pre>
     *     0.	Agriculture / Animal Sciences	$57,028.99	$47,437.97	$55,829.54	$47,817.34	$54,624.16	74.93%	25.07%	84.96%	15.04%
     * </pre>
     *
     * It should be noted that the spaces are actually the tab characters \t
     * Everything should be formatted using the Currency Formatter <br>
     *
     * HINT: System.out.println(CURRENCY_FMT.format(data.getSalary(dataID))); (try
     * it)<br>
     * HINT: use "\t" to create the spacing above<br>
     * HINT: try just printing out the dataID first, and then slowly add each line.
     *
     * @param dataID the salary you want printed from 0 - size of the data
     */
    public void prettyPrint(int dataID) { // NO BUGS IN HERE
        System.out.print(dataID + ".\t");
        System.out.print(data.getMajor(dataID) + "\t");
        System.out.print(CURRENCY_FMT.format(data.getMaleSalary(dataID)) + "\t");
        System.out.print(CURRENCY_FMT.format(data.getFemaleSalary(dataID)) + "\t");
        System.out.print(CURRENCY_FMT.format(data.getWhiteSalary(dataID)) + "\t");
        System.out.print(CURRENCY_FMT.format(data.getPocSalary(dataID)) + "\t");
        System.out.print(CURRENCY_FMT.format(data.getSalary(dataID)) + "\t");
        System.out.print(data.getMalePercent(dataID) + "%\t");
        System.out.print(data.getFemalePercent(dataID) + "%\t");
        System.out.print(data.getWhitePercent(dataID) + "%\t");
        System.out.println(data.getPocPercent(dataID) + "%\t");
    }

    /**
     * Finds the dataId of the major with the highest starting salary.
     *
     * @return dataID - the id of the major with the highest salary
     */
    public int findHighestSalary() { // NO BUGS IN HERE
        int dataID = 0;
        double salary = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getSalary(i) > salary) {
                salary = data.getSalary(i);
                dataID = i;
            }
        }

        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest starting male salary.
     *
     * @return dataID - the id of the major with the highest male salary
     */
    public int findHighestMaleSalary() {
        int dataID = 0;
        double salary = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getMaleSalary(i) > salary) {
                salary = data.getMaleSalary(i);
                dataID = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest starting female salary.
     * 
     * @return dataID - the id of the major with the highest female salary
     */
    public int findHighestFemaleSalary() {
        int dataID = 0;
        double salary = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getFemaleSalary(i) > salary) {
                salary = data.getFemaleSalary(i);
                dataID = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest starting white salary.
     * 
     * @return dataID - the id of the major with the highest white salary
     */
    public int findHighestWhiteSalary() {
        int dataID = 0;
        double salary = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getWhiteSalary(i) > salary) {
                dataID = (int) data.getWhiteSalary(i);
                salary = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest starting salary for people of
     * color.
     *
     * @return dataID - the id of the major with the highest salary for people of
     *         color
     */
    public int findHighestPocSalary() {
        int dataID = 0;
        double salary = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getPocSalary(i) > salary) {
                salary = data.getPocSalary(i);
                dataID = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest percent males in industry
     *
     * @return dataID - the id of the major with the highest percent males in
     *         industry
     */
    public int findHighestPercentMales() {
        int dataID = 0;
        double percent = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getMalePercent(i) > percent) {
                percent = data.getMalePercent(i);
                dataID = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest percent females in industry
     *
     * @return dataID - the id of the major with the highest percent females in
     *         industry
     */
    public int findHighestPercentFemales() {
        int dataID = 0;
        double percent = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getFemalePercent(i) > percent) {
                percent = data.getFemalePercent(i);
                dataID = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest percent whites in industry
     *
     * @return dataID - the id of the major with the highest percent whites in
     *         industry
     */
    public int findHighestPercentWhite() {
        int dataID = 0;
        double percent = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getWhitePercent(i) > percent) {
                percent = data.getWhitePercent(i);
                dataID = i;
            }
        }
        return dataID;
    }

    /**
     * Finds the dataId of the major with the highest percent people of color in
     * industry
     *
     * @return dataID - the id of the major with the highest percent people of color
     *         in industry
     */
    public int findHighestPercentPoc() {
        int dataID = 0;
        double percent = 0;
        for (int i = 0; i < data.size(); i++) {
            if (data.getPocPercent(i) > percent) {
                percent = data.getPocPercent(i);
                dataID = 0;
            }
        }
        return dataID;
    }

    /**
     * Prints a menu that asks for a subset of the data.
     *
     * The data subset is always from the split and higher - focused on salaries
     */
    public void printSubsetMenu() { // NO BUGS IN HERE
        System.out.print("Enter a whole dollar amount (10000) to see salaries above that amount: ");
        int input = getClientInputAsInt();
        System.out.println();
        System.out.println();
        System.out.println(getHeader());

        for (int i = 0; i < data.size(); i++) {
            if (data.getSalary(i) > input) {
                prettyPrint(i);
            }
        }
    }

    /**
     * Prints a menu asking the client if they want the difference between male and
     * female salaries or white and people of color.
     *
     * The client will then need to specify which major they wish to look at. It
     * will keep running ignoring invalid inputs until the client types 0.
     */
    public void findDifferencesMenu() { // NO BUGS IN HERE
        printDifferencesMenu();
        int input = getClientInputAsInt();
        if (input == 0)
            return;
        if (input == 2 || input == 1) {
            printDifferencesSubMenu();
            int dataID = getClientInputAsInt();
            System.out.println();

            int diff; // purposely set as int - for whole numbers

            if (dataID >= 0 && dataID < data.size()) {
                if (input == 1) {
                    diff = calcDiffInGenderSalaries(dataID);
                    System.out.println("The difference between Gender Salaries for " + data.getMajor(dataID) + " is "
                            + diff + "%");
                } else if (input == 2) {
                    diff = calcDiffInPocSalaries(dataID);
                    System.out.println("The difference between PoC and White Salaries for " + data.getMajor(dataID)
                            + " is " + diff + "%");
                }
            } else {
                System.out.println(getInvalidMessage());
            }
        } else {
            System.out.println(getInvalidMessage());
        }
        findDifferencesMenu(); // to keep it looping
    }

    /**
     * Calculate the difference between salaries for a major based on gender
     * demographics.
     *
     * @param dataID the major you wish to look up
     * @return difference as a whole percent so 15.0010 will return 15.
     */
    public int calcDiffInGenderSalaries(int dataID) {
        double diff = 0;
        double male = data.getMaleSalary(dataID);
        double female = data.getFemaleSalary(dataID);
        double average = (male + female) / 2;

        diff = (Math.abs(male - female) / average) * 100;
        return (int) diff;
    }

    /**
     * Calculate the difference between salaries for a major based on
     * self-identified racial demographics.
     *
     * @param dataID the major you wish to look up
     * @return difference as a whole percent so 15.0010 will return 15.
     */
    public int calcDiffInPocSalaries(int dataID) {
        double diff = 0;
        double white = data.getWhiteSalary(dataID);
        double poc = data.getPocSalary(dataID);
        double average = (white + poc) / 2;

        diff = (Math.abs(white - poc) / average) * 100;
        return (int) diff;
    }

    /**
     * This menu helps determine which statistic the client wants to find the
     * highest of. Is it the highest salary or the highest female salary? Every
     * option that is selected calls a method that returns a data ID. The full major
     * information should then be printed using {@link #prettyPrint(int)}.
     */
    public void findHighestMenu() { // NO BUGS IN HERE
        printFindHighest();
        int input = getClientInputAsInt();
        if (input == 0) {
            return;
        } else if (input == 1) {
            prettyPrint(findHighestSalary());
        } else if (input == 2) {
            prettyPrint(findHighestMaleSalary());
        } else if (input == 3) {
            prettyPrint(findHighestFemaleSalary());
        } else if (input == 4) {
            prettyPrint(findHighestWhiteSalary());
        } else if (input == 5) {
            prettyPrint(findHighestPocSalary());
        } else if (input == 6) {
            prettyPrint(findHighestPercentMales());
        } else if (input == 7) {
            prettyPrint(findHighestPercentFemales());
        } else if (input == 8) {
            prettyPrint(findHighestPercentWhite());
        } else if (input == 9) {
            prettyPrint(findHighestPercentPoc());
        } else {
            System.out.println(getInvalidMessage());
        }
        findHighestMenu();
    }

    /**
     * Prints out the menu option for Find Highest
     */
    private void printFindHighest() { // NO BUGS IN HERE
        System.out.println();
        System.out.println();
        System.out.println("Select the stat you wish to find the highest");
        System.out.println("1. Salary");
        System.out.println("2. Male Salary");
        System.out.println("3. Female Salary");
        System.out.println("4. White Salary");
        System.out.println("5. People of Color Salary");
        System.out.println("6. Percent Males in Field");
        System.out.println("7. Percent Females in Field");
        System.out.println("8. Percent Whites in Field");
        System.out.println("9. Percent People of Color in Field");
        System.out.println("0. Exit menu");
        System.out.print("Enter an option: ");
    }

    /**
     * Asks the client which major they want to look at. You will notice something
     * new here - printf. We will cover that in a couple weeks, but it will give a
     * lot more freedom on how to format string (print format)
     */
    private void printDifferencesSubMenu() { // NO BUGS IN HERE
        System.out.println();
        System.out.printf("Select which major you want to view based on DataID (0 - %s): ", data.size());
    }

    /**
     * Prints out a menu for options on seeing differences. Once again done here to
     * prevent debugging due to typo errors
     */
    private void printDifferencesMenu() { // NO BUGS IN HERE
        System.out.println();
        System.out.println();
        System.out.println("Select the stat you wish to compare");
        System.out.println("1. Percent difference between males and female salaries");
        System.out.println("2. Percent difference between people of color and white salaries");
        System.out.println("0. Exit");
        System.out.print("Select an option: ");

    }

    /**
     * Prints out the main menu. Placed in this method already completed to make
     * sure there aren't any simple spelling errors causing long hours debugging.
     */
    private void printMenuOptions() { // NO BUGS IN HERE
        System.out.println();
        System.out.println();
        System.out.println("Salary Data Viewer 1.0");
        System.out.println("Main Menu");
        System.out.println("1. List All");
        System.out.println("2. Find Highest");
        System.out.println("3. Print Sublist");
        System.out.println("4. Find differences");
        System.out.println("0. Exit program");
        System.out.print("Select an option: "); // notice it is print not println!
    }

    /**
     * Returns the header for printing multiple datalines in a row
     */
    private String getHeader() { // NO BUGS IN HERE
        return "DataID.\tMajor\tAvg. Male Salary\tAvg. Female Salary\tAvg. White Salary\tAvg. PoC Salary\tSalary\tMale %\tFemale %\tWhite %\tPoC %";
    }

    /**
     * Uses the {@link #scanner} to grab the next line. It will then parse the line
     * as an integer. If there is an error, returns -1. We use this instead of
     * nextInt() as it is more robust.
     * 
     * @return the number or -1 is not a number
     */
    private int getClientInputAsInt() { // NO BUGS IN HERE
        String val = scanner.nextLine();
        try {
            return Integer.parseInt(val);
        } catch (NumberFormatException ex) {
            return -1;
        }
    }

    /**
     * for ease of printing and grading, an error message that is uniform.
     * 
     * @return a common error message.
     */
    private String getInvalidMessage() { // NO BUGS IN HERE
        return "Invalid entry. Try again.";
    }

    /**
     * Main menu for the application.
     */
    public void mainMenu() { // NO BUGS IN HERE
        printMenuOptions();
        int input = getClientInputAsInt();

        if (input == 0) {
            return;
        } else if (input == 1) {
            listAll();
        } else if (input == 2) {
            findHighestMenu();
        } else if (input == 3) {
            printSubsetMenu();
        } else if (input == 4) {
            findDifferencesMenu();
        } else {
            System.out.println(getInvalidMessage());
        }
        mainMenu();
    }

    /**
     * Main driver class for the program.
     * 
     * @param args allows for a file to be passed in on the command line, but not
     *             used by students
     */
    public static void main(String[] args) { // NO BUGS IN HERE
        SalaryAnalysis sa = new SalaryAnalysis();

        if (args.length > 0) { // this check allows for loading of additional data files from the command line
            sa.data = new SalaryData(args[0]); // for the most part, you won't have to worry about it.
        }
        sa.testMethod();

        sa.mainMenu();

    }

}