#include <iostream>
#include <cstdlib>

namespace Constants
{
	constexpr double gravity{ 9.8 };
}

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds)
{

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance{ Constants::gravity * (seconds * seconds) / 2.0 };
	const double ballHeight{ towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else {
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
		std::exit(0);
	}
		
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

//int main()
//{
//	const double towerHeight{ getTowerHeight() };
//
//	for (int i{ 0 }; i <= towerHeight; ++i) {
//		calculateAndPrintBallHeight(towerHeight, i);
//	}
//
//	return 0;
//}