#include <iostream>
#include "Random.h"


int userGuess() {

	int result{};
	std::cout << "Enter u number: ";
	std::cin >> result;

	return result;
}

bool playAgain() {
    while (true) {
        char ch{};
        std::cout << "Want more? (y/n) ";
        std::cin >> ch;
        if (ch == 'y') return true;
        if (ch == 'n') return false;
    }
}

bool game() {
    int randomNum{ Random::get(1, 100) };

    for (int i{ 1 }; i <= 7; ++i) {
        int guess{ userGuess() };

        if (guess > randomNum)
            std::cout << "Too high\n";
        else if (guess < randomNum)
            std::cout << "Too low\n";
        else {
            std::cout << "You won!\n";
            return true; 
        }
    }

    std::cout << "You lost! The number was " << randomNum << '\n';
    return false; 
}

int main() {

	do {
		game();
	} while ( playAgain() );
	
	return 0;
}