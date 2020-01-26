import java.util.Arrays;

class SwitchTest {

// Question 2
    public static void arrayPrints() {
        int[] arr = {12, 13, 11, 5, 3, 1, 4, 6};

        System.out.println(Arrays.toString(arr)); // Line 1
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr)); // Line 2
        System.out.println(Arrays.binarySearch(arr, 6)); // Line 3
        Arrays.fill(arr, Arrays.binarySearch(arr, 6), Arrays.binarySearch(arr, 13), 0);
        System.out.println(Arrays.toString(arr)); // Line 4
        int count = 0;
        for (int value : arr) {
            if (value == 0) count++;
        }
        System.out.println(count); // Line 5

    }

// Question 3
    public static void loopTests1() {
        // Line 1
        for (int i = 1; i < 100; i++) {
            if (i %10 == 0) System.out.print(i);
        }
        System.out.println();
        // Line 2
        for (int j = 9; j > 0; j -= 3) {
            System.out.print(j);
        }
        System.out.println();
        // Line 3
        int puppies = 5;
        int kitties = 0;
        while (puppies > 0) {
            puppies = puppies -1;
            kitties += puppies;
        }
        System.out.println(kitties);
        // Line 4
        int check = 0;
        do {
            System.out.print(check);
            check++;
        } while (check < 3);
        System.out.println();
        // Line 5
        int pass = 0;
        while (pass++ > 0);
        System.out.println(pass);
    }

// Question 4
    public static void stringTest() {
        String s = "Always bring a towel";
        System.out.println(s.charAt(s.length()-1) + Character.toString(s.charAt(0)));
        System.out.println(s.indexOf('a') + s.indexOf('a', s.indexOf('a')));
        String sub = s.substring(s.indexOf(' '), s.indexOf(' ', s.indexOf(' ')+1));
        System.out.println(sub.trim());
        System.out.println(s.length()+22);
        System.out.println(134531.4 % 2 == 0);
    }

// Question 5
    public static void switchTest() {
        System.out.println(switcher("Halloween", true));
        System.out.println(switcher("Christmas"));
        System.out.println(switcher("Thanksgiving", false));
        System.out.println(switcher("Easter", true));
        System.out.println(switcher("MLK"));
    }

    public static boolean switcher(String holiday) {
        return switcher(holiday, true);
    }
    public static boolean switcher(String holiday, boolean guess) {
        holiday = holiday.toLowerCase();
        boolean needtowork;
        switch(holiday.charAt(0)) {
            case 't':
            case 'c':
                needtowork = false;
                break;
            case 'h':
            case 'm':
            case 'e':
            default:
                needtowork = true;
        }
        return needtowork == guess;
    }

    public static void main(String[] args) {
        switchTest();
        stringTest();
        loopTests1();
        arrayPrints();
    }
}