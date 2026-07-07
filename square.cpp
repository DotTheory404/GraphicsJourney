#include <iostream>
#include "main.h"

int squareValue(int x) {

	return x * x;
}


int readNumber() {

	std::cout << "Enter the number: " << '\n';
	int num{};
	std::cin >> num;

	return num;

}

void writeAnswer(int x) {

	//std::cout << a << " + " << b << " = " << a + b;
	std::cout << "Sum: " << x;
}