import random
#maybe not even needed? idk ill figure that out later

# /**
#  *
#  *  <h1> CS 150 -Methods, Conditionals, and Math with Cake! </h1>
#  *
#  *   <h2> Topics Covered: </h2>
#  *   <ul>
#  *   		<li>Method declaration and body practice</li>
#  *   		<li>If conditional practice</li>
#  *   	    <li>Complex If Statements</li>
#  *   		<li>Constant introduction</li>
#  *   		<li>Math class method practice</li>
#  *   		<li>Division and modulo introduction<li>
#  *   </ul>
#  *
#  * @author Marshall Livingston<br>
#  *         mltechi@rams.colostate.edu <BR>
#  *         Computer Science Department <br>
#  *         Colorado State University
#  * @version 201990
#  */

# declare your class-level variables here
cups_of_flour_per_cake = 2.3
pieces_per_cake = 8
not_enough_flour = -1
exact_cake = 0
extra_cake = 1
class BakerHelper:
    def __init__(self):
        self.cups_of_flour_per_cake = cups_of_flour_per_cake
        self.pieces_per_cake = pieces_per_cake
        self.not_enough_flour = not_enough_flour
        self.exact_cake = exact_cake
        self.extra_cake = extra_cake

    def calc_num_cakes_baked(self, cups_on_hand):
        cakeD = cups_on_hand / self.cups_of_flour_per_cake
        return int(cakeD)

    def cake_enthusiasts(self, party_size):
        return party_size % 20
    
    def message(self, messageID):
        if messageID < 0:
            return "Sorry, You do not have enough flour to bake a cake."
        elif messageID == 0:
            return "No left over cake."
        elif messageID > 0:
            return "Yay, left over cake!"
        else:
            return "Error --> debugg yourself, i wasnt paid for this"

    def determine_leftover_cake(self, cakes, people):
        num_pieces_of_cake = self.pieces_per_cake * cakes
        if cakes <= 0 or num_pieces_of_cake < people:
            return self.not_enough_flour
        elif people > 0 and num_pieces_of_cake - people == 0:
            return self.exact_cake
        else:
            return self.extra_cake

test_1 = BakerHelper()
print("#### Testing calcNumCakesBaked ####")
print(test_1.calc_num_cakes_baked(2))
print(test_1.calc_num_cakes_baked(2.3))
print(test_1.calc_num_cakes_baked(3))
print(test_1.calc_num_cakes_baked(42))
print("#### Testing getCakeEnthusiasts ####")
print(test_1.cake_enthusiasts(21))
print(test_1.cake_enthusiasts(3))
print(test_1.cake_enthusiasts(20))
print(test_1.cake_enthusiasts(42))
print("### TESTING getMessage ###")
print(test_1.message(-1))
print(test_1.message(0))
print(test_1.message(1))
print("### Testing determineLeftoverCake ###")
print(test_1.determine_leftover_cake(10, 10))
print(test_1.determine_leftover_cake(10, 80))
print(test_1.determine_leftover_cake(0, 9))
print(test_1.determine_leftover_cake(1, 8))
# Finished