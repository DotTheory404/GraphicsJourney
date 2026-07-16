#include <iostream>
#include "Random.h"

void calculate(int a, int b, char s) {
	switch (s) {
		case '*':
			std::cout << a * b;
			break;
		case '-':
			std::cout << a - b;
			break;
		case '+':
			std::cout << a + b;
			break;
		case '/':
			std::cout << a / b;
			break;
		case '%':
			std::cout << a % b;
			break;
		default:
			std::cout << "Error!";
			break;
	}	

}

void charLoop() {

	char a{ 'a' };
	while (a <= 'z') {
		std::cout << static_cast<int>(a) << a << '\n';
		++a;
	}
	
}

int sumTo(int stop) {

	int sum{};

	for (int i{ 0 }; i <= stop; ++i)
		sum += i;
	
	return sum;
}

void fizzbuzz(int stop) {

	for (int i{ 1 }; i <= stop; ++i) {
		if (i % 3 == 0 && i % 5 == 0)
			std::cout << "fizzbuzz" << '\n';
		else if (i % 3 == 0)
			std::cout << "fizz" << '\n';
		else if (i % 5 == 0)
			std::cout << "buzz" << '\n';
		else
			std::cout << i << '\n';

	}

}

//int main() {
//
//	//calculate(4, 5, '-');
//	//charLoop();
//
//	//for (int i{ 0 }; i <= 20; ++i)
//	//	std::cout << i << ' ';
//
//	//std::cout << "Sum: " << sumTo(5);
//
//	//fizzbuzz(15);
//
//	//std::cout << Random::get(5, 15);
//
//	std::uniform_int_distribution die6{ 1, 6 }; ;
//	for (int count{ 1 }; count <= 10; ++count)
//	{
//		std::cout << die6(Random::mt) << '\t'; 
//	}
//
//	std::cout << '\n';
//
//	return 0;
//}