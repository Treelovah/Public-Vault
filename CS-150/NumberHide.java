// Step 1 - hiddenNumber(String message)

// hiddenNumber(String message) looks for all numbers in a String. It then returns those numbers as a single number. So for example:

// hiddenNumber("4. Everyone should watch hitchhikers for 2 reasons..."); // returns 42
// hiddenNumber("There were 6 original avengers."); // returns 6
// hiddenNumber("What is the number 1 question for doctor who fans? Who is your favorite doctor. It is not 3."); // returns 13

// It also need to handle very, very large numbers! As such, looking at the total size of an int, you may find that an int is not large enough and instead need to use a long!
// Writing hiddenNumber

// Go to RunLengthEncoder.java (there is a drop down arrow by the file name in Zybooks). You will see the method stub for hiddenNumber has already been created. Obviously, you will want to loop through the String message, and every time you find a digit, you add that digit to the String num. This is concatenating the characters, but that is fine. Once you have ran through the entire String, you will want to call the following method

// rtn = Long.parseLong("123");   // replace 123 with your num variable

// Think about what does Long.parseLong do? If you are unsure, ask your fellow classmates or the TA.
// Testing Hidden number

// Go to TestRunLength.java and find the main method. Go ahead and uncomment out the lines around hiddenNumber(), so you can see what it prints out. Also, you should feel free to change up the messages, to see if it works in other cases. For example, what happens if no number is in the message.

public class NumberHide {

    public static long hiddenNumber(String message) {
        String num = "";
        long rtn = 0;
        num = message.replaceAll("[^0-9]", "");
        // rtn = Integer.parseInt(num);
        rtn = Long.parseLong(num);
        return rtn;
    }


//     Step 2-

//     expand(char x, int count)

// This method is a helper method for runLengthDecoder. However, your goal is to only focus on what this method does. What does it do? Great question!

// Expand takes a character and a number. It then builds a String with that character being repeated the same number of times as the number. For example

// expand('x', 5); // returns "xxxxx"
// expand('L', 2); // returns "LL"
// expand(' ', 3); // returns "   "

// Writing expand(char x, int count)

// Go to RunLengthEncoder.java and find the method stub that is already built for you.

// You will want to build a loop that runs an equal number of times as count, and for every iteration, add the character to the return string.

// Yes, this method is just one loop, but focus on the quest, and not what else it will be used for.

// Testing expand(char x, int count)

// Go back to TestRunLength.java, and uncomment the lines in the main method for the expand tests. You may want to test it with your own numbers and characters also.

    public static String expand(char x, int count) {
        String rtn = "";
        String key = Character.toString(x);
        for (int i = 0; i < count; i++) {
            rtn = rtn.concat(key);
        }
        return rtn;
    }

    public static String runLengthEncoding(String str) {
        String rtn = "";
        int count = 1;
        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                rtn += Integer.toString(count) + str.charAt(i - 1);
                count = 1;
            }
        }
        return rtn += Integer.toString(count) + str.charAt(str.length() -1);
        
    }

    // loop thru string
    // multiply digit by char
    // store in variable
    // print variable
    public static String runLengthDecoding(String str) {
        String rtn = "";
        for (int i = 0; i < str.length(); i++) {
            try {
                int count = Integer.parseInt(str.substring(i, i + 2));
                rtn += new String(new char[count]).replace("\0", "" + str.charAt(i + 2));
                i += 2;
            } catch (NumberFormatException ex) {
                int count = Integer.parseInt(str.substring(i, i + 1));
                rtn += new String(new char[count]).replace("\0", "" + str.charAt(i + 1));
                i += 1;
            }
        }
        return rtn;
    }

    // public static String formattedInfo(String name, int rawLength, int encodedLength, double compression) {
    //     System.out.printf("%s %f %f %d","DNA",33.0, 33.33,);
    // }
    public static String formattedInfo(String name, int rawLength, int encodedLength, double compression) {
        return String.format("%s raw length is %d, while encoded %s length is %d. %.2f%% compression.", name, rawLength, name, encodedLength, compression);
    }

    public static void main(String[] args) {
        System.out.println("hiddenNumber warm-up");
        System.out.println(hiddenNumber("42"));
        System.out.println(hiddenNumber("e34e"));
        System.out.println(hiddenNumber("Johny 5 is Alive."));
        System.out.println(hiddenNumber("The great robot mystery 101001010012"));
        System.out.println();
        
        // STEP 2 //
        System.out.println("testing expand");
        System.out.println(expand('w', 3));
        System.out.println(expand('A', 0));
        System.out.println(expand('G', 150));
        System.out.println();

        // STEP 3 //
        System.out.println("testing runLengthEncoding");
        System.out.println(runLengthEncoding("RRRRSTTT")); // should return 4R1S3T
        System.out.println(runLengthEncoding("a")); // should return 1a
        System.out.println(runLengthEncoding("aa")); // should return 2a
        System.out.println(runLengthEncoding("aaaaaaaaaaBb")); // should return 10a1B1b
        System.out.println();
        
        // STEP 4 //
        System.out.println("testing runLengthDecoding");
        System.out.println(runLengthDecoding("4R1S3T")); // should return RRRRSTTT
        System.out.println(runLengthDecoding("1a")); // should return a
        System.out.println(runLengthDecoding("2a")); // should return aa
        System.out.println(runLengthDecoding("10a1B1b")); // should return aaaaaaaaaaBb
        System.out.println();

        // STEP 5 //
        System.out.println(formattedInfo("DNA", 980, 673, 31.33));
    }
}