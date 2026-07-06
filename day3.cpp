#include <iostream>

int squareFunc(int x) {

	return x * x;

}


int main() {

	int x{ };

	std::cout << "Enter value: ";
	std::cin >> x;

	std::cout << "Your square of value: " << squareFunc(x);

	return 0;
}