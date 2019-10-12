/**
 *
 * <h1> CSU Astrology: Rams for the Stars </h1>
 *
 *  For this assignment, you are going to build 'business' cards for the
 *  new CSU Astrology department.
 *
 * @author YOUR NAME <br>
 *      YOUR EMAIL <br>
 *      Computer Science Department <br>
 *      Colorado State University
 * @version 201990
 */
public class Astrologer {

   public static String getAstrologerName() {

      return "Marshall Livingston";

   }

   public static String getAstrologerEmail() {

      return "mltechi@rams.colostate.edu";

   }

   public static String getBusinessCard(String name, String email) {
      //lone ranger ;)
      return "+--------------------------------------+\n| CSU Astrology                        |\n| Rams for the Stars                   |\n|                                      |\n|                                      |" + "\n|\t    " + name + "        |" + "\n|\t    " + email + " |" + "\n+--------------------------------------+";

   }

	public static String getAries() {
		String aries = "+--------------------------------------+\n" +
		               "|                .-.   .-.             |\n" +
 			            "|               (_  \\ /  _)            |\n" +
      				   "|                    |                 |\n" +
       				   "|                    |                 |\n"+
				         "|                      ~Aries- The Ram |\n" +
				         "+--------------------------------------+";
		return aries;

	//https://asciiart.website/index.php?art=religion/astrology

	}

	public static String getLeo() {
		String leo = "+--------------------------------------+\n" +
		             "|                .--.                  |\n" +
     				    "|               (    )                 |\n" +
   				    "|               (_) /                  |\n" +
        			    "|                  (_,                 |\n" +
				       "|                       ~Leo- The Lion |\n" +
				       "+--------------------------------------+";
		return leo;

	}

	public static String getSagittarius() {
		String Sagittarius ="+--------------------------------------+\n" +
		                    "|           ...                        |\n" +
         				     "|           .':                        |\n" +
       				        "|         .'                           |\n" +
  				              "|     `..'                             |\n" +
    				           "|     .'`.                             |\n" +
					           "|             ~Sagittarius- The Archer |\n" +
					           "+--------------------------------------+";
		return Sagittarius;
	//https://asciiart.website/index.php?art=religion/astrology

	}


   public static void main(String[] args) {
      System.out.println("======Part One======");
      System.out.println(getAstrologerName());
      System.out.println(getAstrologerEmail());

      System.out.println("\n\n======Part Two======");
      String astroName = getAstrologerName();
      String astroEmail = getAstrologerEmail();

      System.out.println(getBusinessCard(astroName, astroEmail));

      System.out.println("\n\n======Part Three======");
		System.out.println(getAries());
		System.out.println(getLeo());
		System.out.println(getSagittarius());
   }

}
