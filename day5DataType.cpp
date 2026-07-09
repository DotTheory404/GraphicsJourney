#include <iostream>
#include <cstdint>
#include <iomanip>

bool isEven(int x) {
	return ((x % 2) == 0);
}

int inputUser() {

	int x{};
	std::cout << "Enter your value in range 0-9: " << '\n';
	std::cin >> x;

	return x;
}

bool isPrime(int value) {

	if (value == 3 || value == 2 || value == 5 || value == 7)
		return true;
	else
		return false;
}

void print(int a) {
	std::cout << "Your double: " << a << '\n';
}

//int main() {
//
//	//std::int32_t x{ 65 };
//	//x = x + 1;
//	//std::cout << sizeof(long double) << '\n';
//	double zero{ 0.0 };
//	//std::cout << -7 / zero << '\n';
//	//std::cout << zero / zero << '\n';
//
//	//std::cout << std::setprecision(10);
//	//std::cout << 5.55f << '\n';
//	//std::cout << 5.55555555555555555555555555555555555 << '\n';
//
//	bool flag{ true };
//	bool defFlag{};
//	if (!flag) 
//		std::cout << "YES" << '\n';
//	else 
//		std::cout << "NO" << '\n';
//	
//	std::cout << defFlag << '\n';
//	std::cout << true << '\n'; // => 1
//	std::cout << std::boolalpha;
//	std::cout << false << '\n'; // => flase
//
//	std::cin >> std::boolalpha; //to correct true in terminal = true, not false cause string
//
//	bool inputBool{};
//	//std::cout << "Enter bool: " << '\n';
//	//std::cin >> inputBool;
//	//std::cout << "Your value: " << inputBool << '\n';
//
//
//	int x{ 8 };
//	//std::cout << "Is even?: " << x << " => " << isEven(x) << '\n';
//	//int value{ inputUser() };
//	//std::cout << "Your value: " << isPrime(value) << '\n';
//
//	char ch1{ 'a' };
//	char ch2{ 78 };
//	//std::cout << ch2 << '\n';
//
//	//type conversion
//	int a = 7.7;
//	print( static_cast<int>(a) );
//
//	unsigned int b{ 4294967295 };
//	//std::cout << static_cast<int>(b) << '\n';
//
//	char userInput{};
//	std::cout << "Enter char: ";
//	std::cin >> userInput;
//
//	std::cout << static_cast<int>(userInput) << '\n';
//	
//	return 0;
//}