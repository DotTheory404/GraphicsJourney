#include <iostream>
#include "main.h"

//int readNumber();
//
//void writeAnswer(int x);

void printA(int x) {
	x = 10;
	std::cout << "First in: " << x << "\n";
}

void printB(int x) {
	x = x + x;
	std::cout << "Last out: " << x << "\n";
}

int main() {

	//int valueA{ readNumber() };
	//int valueB{ readNumber() };

	//writeAnswer(valueA + valueB);
	int x{ 9 };
	int y{};
	std::cout << "y: " << y << "\n";
	std::cout << "x: " << x << "\n";
	printA(x);
	printB(x);

	if (x <= 15) {
		printA(x);
		y = y + 1;
		std::cout << "y: " << y << "\n";
	}
	else
	{
		printB(x);
	}

	return 0;
}