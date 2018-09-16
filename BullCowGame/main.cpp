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

FBullCowGame BCGame; // instantiante a new game

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
	int CurrentTry = BCGame.GetCurrentTry();
	
	std::string Guess = "";
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	
	return Guess;
}

// loop through each turn asking for a guess
void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
	
	// TODO change the for to while loop
	for (int count = 0; count < MaxTries; count += 1) {
		std::string Guess = GetGuess(); // TODO Make loop checking valid guesses
		
		// Submit valid guess to the game
		// Print number of bulls and cows
		std::cout << "Your guess was: " << Guess << "\n";
		std::cout << std::endl;
	}
	
	// TODO summarise the game
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Answer = "";
	std::getline(std::cin, Answer);
	std::cout << std::endl;
	
	return (Answer[0] == 'y') || (Answer[0] == 'Y');
}

