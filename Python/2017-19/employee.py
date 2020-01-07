# # Modify this function to return a list of strings as defined above
# def list_benefits():
#     replies = ["More organized code", "More readable code", "Easier code reuse",
#                "Allowing programmers to share and connect code together"]
#     return replies

# # Modify this function to concatenate to each benefit - " is a benefit of functions!"


# def build_sentence(info):
#     return "{} is a benefit of functions!".format(info)


# def name_the_benefits_of_functions():
#     list_of_benefits = list_benefits()
#     for benefit in list_of_benefits:
#         print(build_sentence(benefit))


# name_the_benefits_of_functions()


# class Dogs:

#     def __init__(self, gender, breed, weight, age):
#         self.gender = gender
#         self.breed = breed
#         self.weight = weight
#         self.age = age
    
#     def age_check(self):
#         if self.age < 10:
#             return "{} years is still young, {} is full of vigor and such a happy dog!".format(self.age, self.gender)
#         else:
#             return "for being over %s years old, %s is looking very healthy. I would recommend continuing daily walks and incorporating more love into her daily interactions" % (self.age, self.gender)


# kaycee = Dogs("female", "pitbull", 69.72, 10)
# print(kaycee.gender)
# print(kaycee.breed)
# print(kaycee.weight)
# print(kaycee.age)
# print(kaycee.age_check())






# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00

    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (
            self.name, self.color, self.kind, self.value)
        return desc_str
# your code goes here
car1 = Vehicle()
car2 = Vehicle()
car1.name = 'Fer'
car1.color = 'red'
car1.kind = 'convertible'
car1.value = 60000.00

car2.name = 'Jump'
car2.color = 'blue'
car2.kind = 'van'
car2.value = 10000.00

# test code
print(car1.description())
print(car2.description())




# phonebook = {
#     "Tr33": 8472062012,
#     "Erin": 8474366660,
#     "John": 938477566,
#     "Jack": 938377264,
#     "Jill": 947662781
# }
# for i, b  in phonebook.items():
#     print("Phone number of %s is %d" %(i, b))

# phonebook

import urllib3
print(dir(urllib3))