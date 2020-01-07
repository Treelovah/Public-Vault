with open("/tmp/cars.txt", "r+") as myfile:
    for i in range(50):
        myfile.write('There are {0} cars\n'.format(i))
myfile = open("/tmp/cars.txt", "r")
fc = myfile.read()
print(fc)
