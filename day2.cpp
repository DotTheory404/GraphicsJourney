#include <iostream>


int main() {

	std::cout << "Enter value: " << '\n';
	int x{};

	std::cin >> x;

	std::cout << "Your value of power: " << x * 2;

	return 0;
}