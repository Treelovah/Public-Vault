#include <iostream>
#include "constants.h"
/* Extra credit: This one is a little more challenging.

Write a short program to simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters.
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Your program should include a header file named constants.h that includes a namespace called myConstants. 
In the myConstants namespace, define a symbolic constant to hold the value of gravity (9.8).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

*/

#include <iostream>
#include "constants.h"
 
// gets height from user and returns it
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}
 
// Returns height from ground after "seconds" seconds
double calculateHeight(double towerHeight, int seconds)
{
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen { (My_Constants::gravity * (seconds * seconds)) / 2 };
	double currentHeight { towerHeight - distanceFallen };
 
	return currentHeight;
}
 
// Prints height every second till ball has reached the ground
void printHeight(double height, int seconds)
{
	if (height > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}
 
void calculateAndPrintHeight(double towerHeight, int seconds)
{
	double height { calculateHeight(towerHeight, seconds) };
	printHeight(height, seconds);
}
 
int main()
{
	const double towerHeight { getTowerHeight() };
 
	calculateAndPrintHeight(towerHeight, 0);
	calculateAndPrintHeight(towerHeight, 1);
	calculateAndPrintHeight(towerHeight, 2);
	calculateAndPrintHeight(towerHeight, 3);
	calculateAndPrintHeight(towerHeight, 4);
	calculateAndPrintHeight(towerHeight, 5);
 
	return 0;
}