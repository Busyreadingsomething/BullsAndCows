//
//  main.cpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/7/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();


// the entry point for the application
int main()
{
	bool PlayAgain = false;
	
	do {
		PrintIntro();
		PlayGame();
		PlayAgain = AskToPlayAgain();
	}
	while(PlayAgain);
	
	return 0; // exit application
}

// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

// get a guess from the player
std::string GetGuess()
{
	std::string Guess = "";
	std::cout << "Enter your guess: ";
	std::getline(std::cin, Guess);
	
	return Guess;
}

// loop through each turn asking for a guess
void PlayGame()
{
	FBullCowGame BCGame; // instantiante a new game
	
	constexpr int LIMIT = 5;
	for (int count = 0; count < LIMIT; count += 1) {
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << "\n";
		std::cout << std::endl;
	}
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Answer = "";
	std::getline(std::cin, Answer);
	std::cout << std::endl;
	
	return (Answer[0] == 'y') || (Answer[0] == 'Y');
}

