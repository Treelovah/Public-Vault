import java.util.*;
class loopTest {
    public static void loopTest() {
        String[] doctors = new String[13];

        doctors[0] = "William Hartnell";
        doctors[2] = "Jon Pertwee";
        doctors[4] = "Peter Davidson";
        doctors[6] = "Sylvester McCoy";
        doctors[8] = "Christopher Eccelston";
        doctors[10] = "Matt Smith";
        doctors[12] = "Jodie Whittaker";

        for(int i = 0; i < doctors.length; i++) {
            if(doctors[i] != null && doctors[i].startsWith("Chris")) {
                System.out.println("Don't forget John Hurt");
            }
        }

        String print2 = "";
        for (int i = doctors.length-1; i > 1; i /=2) {
            if ( i % 2 != 0) i++;
            print2 += String.valueOf(doctors[i]).charAt(0);
        }
        System.out.println(print2);

        String print3 = "";
        int i = 1;
        while (print3.isEmpty()) {
            if (doctors[i] == null) i += 2;
            else print3 += doctors[i].split("0")[0];
            if (i > 12) i = 12;
        }
        System.out.println(print3);
        String print4 = "";
        do {
            print4 = String.format("Doctor %d is %s", i+1, doctors[i]);
            i++;
        }while (i < 12);
        System.out.println(print4);
    }

    public static void main(String[] args) {
        loopTest();
    }

    // public static void arrayPtest() {
    //     int[] arr = {-11,0,10,1,52,-11,7};
    //     doSomething(arr);
    //     System.out.println(Arrays.toString(arr));
    // }

    // public static void doSomething(int[] arr) {
    //     int start = 0;
    //     while (start < arr.length) {
    //         int minI = start;
    //         for (int i = start; i < arr.length; i++) {
    //             if (arr[minI] > arr[i]) minI = i;
    //         }
    //         int tmp = arr[minI];
    //         arr[minI] = arr[start];
    //         arr[start] = tmp;
    //         start++;
    //     }
    // }
    // public static void main(String[] args) {
    //     arrayPtest();
    // }
}