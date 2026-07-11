#include <iostream>
#include <string_view>
#include <string>


std::string inputName() {

	std::cout << "Enter your name: ";
	std::string name {};
	std::getline(std::cin >> std::ws, name);

	return name;
}

int inputAge() {

	int age{};
	std::cout << "Enter age: ";
	std::cin >> age;

	return age;
}

void result(const std::string name1, int age1, const std::string name2, int age2) {
	
	std::cout << name1 << ' ' << age1 << '\n';
	std::cout << name2 << ' ' << age2 << '\n';

	if (age1 > age2)
		std::cout << name1 << " are older";
	else
		std::cout << name2 << " are older";
}


//int main() {
//
//	const std::string name1{ inputName() };
//	const std::string name2{ inputName() };
//
//	const int age1{ inputAge() };
//	const int age2{ inputAge() };
//
//	result(name1, age1, name2, age2);
//
//	return 0;
//}