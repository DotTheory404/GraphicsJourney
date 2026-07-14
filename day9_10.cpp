//#include <iostream>
//#include <utility>
//
//
//namespace Day10 {
//	int inputUser() {
//
//		std::cout << "Enter integer: ";
//		int x{};
//		std::cin >> x;
//		return x;
//	}
//}
//
//
//int main() {
//
//	int smaller{ Day10::inputUser() };
//	int larger{ Day10::inputUser() };
//
//	if (smaller > larger) {
//		//int temp{ larger };
//		//larger = smaller;
//		//smaller = temp;
//
//		std::swap(smaller, larger);
//
//	}
//	std::cout << "Smaler: " << smaller << " Larger: " << larger;
//
//	return 0;
//}

#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num < 0) {
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;
	}
		

	std::cout << "You entered: " << num;

	return 0;
}