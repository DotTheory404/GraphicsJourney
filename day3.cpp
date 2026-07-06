#include <iostream>
//#include <typeinfo>
#include ".h"

int squareValue(int x);

#define MY_AGE 24
#define SAY_YES NULL

int getUserInput() {

	int x{};
	std::cout << "Enter value: ";
	std::cin >> x;

	return x;

}


int main() {

	//int userValue{ getUserInput() };

	//std::cout << "Your square value: " << squareValue(userValue) << '\n';
	
	//std::cout << typeid("Hello world me").name() << '\n';

	std::cout << "My age is " << MY_AGE << '\n';
	if (SAY_YES) {
		std::cout << "U agree" << '\n';
	}
	else {
		std::cout << "U disagree" << '\n';
	}

	#ifdef SAY_YES
		std::cout << "YES" << '\n';
	#endif

	#ifdef SAY_NO
		std::cout << "NO" << '\n';
	#endif

	#if 0
		std::cout << "This never be seen" << '\n';
	#endif

	return 0;
}