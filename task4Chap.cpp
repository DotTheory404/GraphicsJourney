#include <iostream>

/*
* Task 1
double userInput() {

	double value{};
	std::cout << "Enter the value: \n";
	std::cin >> value;

	return value;
}

char userInputSymbol() {

	char userSymbol{};
	std::cout << "Enter the symbol: \n";
	std::cin >> userSymbol;

	return userSymbol;
}

void theResult(double a, double b, char s) {
	
	double result{};

	if (s == '+')
		result = a + b;
	else if (s == '-')
		result = a - b;
	else if (s == '*')
		result = a * b;
	else if (s == '/')
		result = a / b;
	else
		return;
	std::cout << "The result: " << result << '\n';
}



int main() {

	double numOne{ userInput() };
	double numTwo{ userInput() };

	char symbol{ userInputSymbol() };

	//int ascii{ static_cast<int>(symbol) };

	//std::cout << numOne << static_cast<char>(ascii) << numTwo << " = " << numOne ascii numTwo;

	theResult(numOne, numTwo, symbol);

	return 0;
}
*/


/*
* task 2
double inputHeight() {

	double h{};
	std::cout << "enter the height: ";
	std::cin >> h;

	return h;
}

void dist(double h, double g, int s) {

	double result{ h - ((g * std::pow(s, 2) / 2)) };
	if (result >= 0)
		std::cout << "At " << s << " seconds, the ball is at height: " << result << '\n';
	else
		std::cout << "At " << s << " seconds, the ball is on the ground." << '\n';
}


int main() {

	double height{ inputHeight() };
	double gravity{ 9.8 };

	dist(height, gravity, 0);
	dist(height, gravity, 1);
	dist(height, gravity, 2);
	dist(height, gravity, 3);
	dist(height, gravity, 4);
	dist(height, gravity, 5);

	return 0;
}
*/
