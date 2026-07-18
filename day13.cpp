//error handling

#include <iostream>
#include "Random.h" 
#include <cassert>

namespace Handel {


	int getGuess(int min, int max) {
		while (true) {
			int guess{};
			std::cin >> guess;

			bool success{ std::cin };
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

			if (!success || guess < min || guess > max)
				continue;

			return guess;
		}
	}

	bool playHiLo(int guesses, int min, int max)
	{
		std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
		const int number{ Random::get(min, max) }; // this is the number the user needs to guess

		// Loop through all of the guesses
		for (int count{ 1 }; count <= guesses; ++count)
		{
			
			std::cout << "Guess #" << count << ": ";
			int guess{ getGuess(min, max) };
			if (guess > number)
				std::cout << "Your guess is too high.\n";
			else if (guess < number)
				std::cout << "Your guess is too low.\n";
			else // guess == number, so the user won
			{
				std::cout << "Correct! You win!\n";
				return true;
			}
		}

		// The user lost
		std::cout << "Sorry, you lose. The correct number was " << number << '\n';
		return false;
	}

	bool playAgain()
	{
		// Keep asking the user if they want to play again until they pick y or n.
		while (true)
		{

			char ch{};
			std::cout << "Would you like to play again (y/n)? ";
			std::cin >> ch;

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			switch (ch)
			{
			case 'y': return true;
			case 'n': return false;
			}

			std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
		}
	}

}

//int main()
//{
//	constexpr int guesses{ 7 }; // the user has this many guesses
//	constexpr int min{ 1 };
//	constexpr int max{ 100 };
//
//	do
//	{
//		Handel::playHiLo(guesses, min, max);
//	} while (Handel::playAgain());
//
//	std::cout << "Thank you for playing.\n";
//
//	return 0;
//}