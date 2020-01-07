# The Elves quickly load you into a spacecraft and prepare to launch.
# At the first Go / No Go poll, every Elf is Go until the Fuel Counter-Upper. They haven't determined the amount of fuel required yet.
# Fuel required to launch a given module is based on its mass. Specifically, to find the fuel required for a module, take its mass, divide by three, round down, and subtract 2.

# ((mass / 3).floor() - 2)

import math
total_fuel = 0
f = open("./input_day_1.txt", mode='r')
for i in f:
    fuel = (int(i) / 3) - 2
    fuel = math.floor(fuel)
    total_fuel += fuel
print(total_fuel)
