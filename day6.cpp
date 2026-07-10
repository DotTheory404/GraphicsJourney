#include <iostream>
#include <string>

const int getValue() {
	return 5;
}

void inputInfo() {

	
	std::string fullName {};
	int age{};
	std::cout << "Enter full name: ";
	std::getline(std::cin >> std::ws, fullName);

	std::cout << "Enter age: ";
	std::cin >> age;

	std::cout << "Your name: " << fullName << '\n'
		<< "Your age: " << age << '\n'
		<< "The sum: " << static_cast<int>(fullName.length()) + age;

}

//int main() {
//
//	inputInfo();
//	
//
//	return 0;
//}
