/**
 * <h1>  Traveling Alchemist the Almost MUD </h1>
 *
 *      In this assignment, we focus heavily on string and text manipulation. This is based on the old
 *      <a href="https://en.wikipedia.org/wiki/MUD">MUDs</a>
 *      or <u>M</u>uli - <u>U</u>ser <u>D</u>ungeons, which are some of the first examples of
 *      virtual worlds <a href="https://en.wikipedia.org/wiki/Online_text-based_role-playing_game">online</a>.
 *      This example also includes GIS positioning data (latitude and longitude)
 *      and a formula used to calculate distances in GIS applications. As such, through the game
 *      we are learning about GIS and also some of the first MMORPGs around.
 *
 *      <h2>What You'll Learn</h2>
 *      <ul>
 *          <li>String functions</li>
 *          <li>String concatenation</li>
 *          <li>Program flow control</li>
 *          <li>Pattern Matching</li>
 *      </ul>
 *
 *     <h2>How to win?</h2>
 *     This "game" is very limited due to the scope of the assignment. You are only writing the helper functions to it,
 *     but a fun way to challenge yourself will be to see if you can find a path to visit all the cities in the
 *     least amount of time possible. This is a well known problem in computer science, that we will talk about in class.
 *
 *     Why are you visiting the cities? To sell them your love potion #9 of course! or whatever reason you can think about.
 *     MUDs were often very open in their feel depending on how people played them.
 *
 * @author YOURNAME <br>
 *         YOUREMAIL <br>
 *         Computer Science Department <br>
 *         Colorado State University
 * @version 201990
 */
public class AlchemistHelper {
    public static final int EARTH_RADIUS  = 3961;  //radius of the earth at 39 degrees latitude in miles - to use Kilometers: 6373

    public static boolean RUN_TESTS = true;
    public static final String DEGREE = "°";
    public static final String MINUTE = "\'";
    public static final String SECOND = "\"";

    public static void testMethod() {
        // examples
        //System.out.println(getCityInfo("Fort Collins,40°35'6.9288\"N,105°5'3.9084\"W;Denver,39°44'31.3548\"N,104°59'29.5116\"W;Boulder,40°0'53.9424\"N,105°16'13.9656\"W;Salida,38°32'4.9848\"N,105°59'56.0436\"W;Loveland,40°23'55.8852\"N,105°3'9.5148\"W;Pueblo,38°16'35.2668\"N,104°36'16.5852\"W","fort", ";"));

        //System.out.println(getCityName("Fort Collins,40°35'6.9288\"N,105°5'3.9084\"W", ","));
        //System.out.println(getCityLongitude("Fort Collins,40°35'6.9288\"N,105°5'3.9084\"W", ","));
        //System.out.println(getCityLatitude("Fort Collins,40°35'6.9288\"N,105°5'3.9084\"W", ","));

        // double val =  convertDegreesToDecimals("40°35'6.9288\"N");
        //  double val2 = convertDegreesToDecimals("105°5'3.9084\"W");
        //  System.out.println(val + " should be  40.585258");
        // System.out.println(val2 + " should be -105.084419 (check sign!)");

    }



    /**
     * Get the city info by using a substring of a city name. For example if the parameter destination equaled
     * <pre>
     *     fort
     *
     *     then
     *     Fort Collins,40°35'6.9288"N,105°5'3.9084"W
     *
     *     will be returned
     * </pre>
     *
     * You can assume the start of the city is typed, and someone isn't using 'collins' to find fort collins.
     * You will want to use the CITY_DELIMINATOR constant in this method, and the cities class variable. Useful
     * string methods to look at
     * <ul>
     *     <li>length()</li>
     *     <li>indexOf(char)</li>
     *     <li>subString(int)</li>
     *     <li>toLowerCase()</li>
     * </ul>
     * @param cityList a list of cities separated by deliminator
     * @param destination the substring of a city name to be matched so the full city data can be pulled from the cities string. It should be lowercase.
     * @param deliminator the separator of the cities
     * @return a full city data line (EX: Fort Collins,40°35'6.9288"N,105°5'3.9084"W)
     */
    public static String getCityInfo(String cityList, String destination, String deliminator) {
        return ""; // only here so it can compile. You should change this
    }


    /**
     * Returns the name of a city, based on the 'city data' line from the traveling alchemist came.
     * The typical line looks like the following:
     *
     * <pre>
     *     Fort Collins,40°35'6.9288"N,105°5'3.9084"W
     * </pre>
     *
     *  with the comma being the deliminator (notice, it is a passed in parameter). The returned result
     *  will be
     *
     *  <pre>
     *      Fort Collins
     *  </pre>
     *
     *  It is safe to assume the city always starts the string, and goes until the deliminator.
     *
     * @param cityData a city string in the format of Name,Latitude,Longitude
     * @return the name of the city
     */
    public static String getCityName(String cityData, String deliminator) {
        return ""; // only here so it can compile. You should change this
    }


    /**
     * Returns the Longitude of a city, based on the 'city data' line from the traveling alchemist came.
     * The typical line looks like the following:
     *
     * <pre>
     *     Fort Collins,40°35'6.9288"N,105°5'3.9084"W
     * </pre>
     *
     *  with the comma being the deliminator (notice, it is a passed in parameter). The returned result
     *  will be
     *
     *  <pre>
     *      105°5'3.9084"W
     *  </pre>
     *
     * It is safe to assume the Longitude is always the last in the city data string.
     *
     * @param cityData a city string in the format of Name,Latitude,Longitude
     * @param deliminator the deliminator in which the city is split by. Usually commas
     * @return the name of the city
     */
    public static String getCityLongitude(String cityData, String deliminator) {
        return ""; // only here so it can compile. You should change this
    }


    /**
     * Returns the Latitude of a city, based on the 'city data' line from the traveling alchemist came.
     * The typical line looks like the following:
     *
     * <pre>
     *     Fort Collins,40°35'6.9288"N,105°5'3.9084"W
     * </pre>
     *
     *  with the comma being the deliminator (notice, it is a passed in parameter). The returned result
     *  will be
     *
     *  <pre>
     *      40°35'6.9288"N
     *  </pre>
     *
     * It is safe to assume the Latitude is always the middle value in the city data string.
     *
     * @param cityData a city string in the format of Name,Latitude,Longitude
     * @param deliminator the deliminator in which the city is split by. Usually commas
     * @return the name of the city
     */
    public static String getCityLatitude(String cityData, String deliminator) {
        return ""; // only here so it can compile. You should change this
    }


    /**
     * Convert a latitude or longitude stored in coordinate degrees, minutes, seconds, direction format to decimal (double)
     * format. For example, 40°35'6.9288"N would return 40.585258 and 105°5'3.9084"W would return -105.084419.
     * You will note that West values and South values return negative values.
     *
     * <p>
     * For simple coordinate conversion you take the degree part of the value, add the minute part divided by 60
     * and then add the second part divided by 3600. For example, 105°5'3.9084"W would be 105 + (5 / 60) + (3.9084/ 3600)
     * and then you would multiply it by -1 to make it the negative coordinate.
     * </p>
     *
     * <p>
     *     You will want to use the DEGREE, MINUTE ane SECOND constants while looking at indexOf and substring.
     *     Double.parseDouble(stringValue) will return the double of the number once you *only* have a number.
     * </p>
     *
     * <p>
     *     This is another method where your instructor put in printlns while working on it to make sure
     *     he was getting the proper substrings.
     * </p>
     *
     * @param strValue A coordinate in the format of degree°minute'second"cardinal_direction or example 105°5'3.9084"W
     * @return the decimal value of that coordinate as a double.
     */
    public static double convertDegreesToDecimals(String strValue) {
       
        double decimal = 0;
        //todo
        

        /// hint you should toss in some temp print lines to makes sure you don't have an OB1 error before continuing


        return decimal;
    }



    // do not edit - but worth looking at especially if you have the GIS/SIM minor
    /**
     *  This is a complex math formula used in GIS system data
     *     https://andrew.hedges.name/experiments/haversine/
     *     dlon = lon2 - lon1
     *     dlat = lat2 - lat1
     *     a = (sin(dlat/2))^2 + cos(lat1) * cos(lat2) * (sin(dlon/2))^2
     *     c = 2 * atan2( sqrt(a), sqrt(1-a) )
     *     d = R * c (where R is the radius of the Earth)
     * @param lat1 start point latitude
     * @param lon1 start point longitude
     * @param lat2 end point latitude
     * @param lon2 end point longitude
     * @return the distance as a double
     */
    public static double haversine(double lat1, double lon1, double lat2, double lon2) {
        double dlat = Math.toRadians(lat2 - lat1);
        double dlon = Math.toRadians(lon2 - lon1);
        double a = Math.pow(Math.sin(dlat/2), 2) +
                Math.cos(Math.toRadians(lat1)) *
                        Math.cos(Math.toRadians(lat2)) *
                        Math.pow(Math.sin(dlon/2), 2);
        double c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1-a));
        return EARTH_RADIUS * c;
    }
}
