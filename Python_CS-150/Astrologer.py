# /**
#  *
#  * <h1> CSU Astrology: Rams for the Stars </h1>
#  *
#  *  For this assignment, you are going to build 'business' cards for the
#  *  new CSU Astrology department.
#  *
#  * @author Marshall Livingston <br>
#  *      mltechi@rams.colostate.edu <br>
#  *      Computer Science Department <br>
#  *      Colorado State University
#  * @version 201990
#  */

class Astrologer:

    def __init__(self, first, last):
        self.first = first
        self.last = last
        self.email = 'mltechi@rams.colostate.edu'
        # The comment below is more ideal and should be used instead..also its just not as pretty
        # self.email = first + "." + last + "@rams.colostate.edu"

    def fullname(self):
        return '{} {}'.format(self.first, self.last)
    
    def business_card(self, name, email):
        # just cuz.
        return "+--------------------------------------+\n| CSU Astrology                        |\n| Rams for the Stars                   |\n|                                      |\n|                                      |" + "\n|\t    " + name + "        |" + "\n|\t    " + email + " |" + "\n+--------------------------------------+"

    def aries(self):
        aries = """\
                +--------------------------------------+
                |                .-.   .-.             |
 		|               (_  \\ /  _)            |
      	        |                    |                 |
       	        |                    |                 |
		|                      ~Aries- The Ram |
		+--------------------------------------+
        """
        return aries
        # Here is where i found my ascii art ^_^ tehehe
        # https://asciiart.website/index.php?art=religion/astrology

    def leo(self):
        leo = """\
                +--------------------------------------+
		|                .--.                  |
     	        |               (    )                 |
   		|               (_) /                  |
                |                  (_,                 |
		|                       ~Leo- The Lion |
		+--------------------------------------+
            """
        return leo

    def sagittarius(self):
        sagittarius = """\
		+--------------------------------------+
		|           ...                        |
                |           .':                        |
       	        |         .'                           |
  		|     `..'                             |
    	        |     .'`.                             |
		|             ~Sagittarius- The Archer |
		+--------------------------------------+            
            """
        return sagittarius

astro_1 = Astrologer('Marshall', 'Livingston')

print("======Part One======")
print(astro_1.fullname())
print(astro_1.email)
print(astro_1.business_card(astro_1.fullname(), astro_1.email))
print("======Part Two======")
print(astro_1.aries())
print(astro_1.leo())
print(astro_1.sagittarius())