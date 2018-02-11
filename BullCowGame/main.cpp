#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();

// Main driver for the program.
int main()
{
	PrintIntro();
	PlayGame();
	return 0;
}

// Introduction to the game.
void PrintIntro()
{
	using namespace std;
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
}

void PlayGame()
{
	using namespace std;
	// Loop for number of turns asking for guesses.
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << "\n\n";
	}
}

// Get a guess from the player.
std::string GetGuess()
{
	using namespace std;
	cout << "Enter Your Guess: \n";
	string Guess;
	getline(std::cin, Guess);
	return Guess;
}