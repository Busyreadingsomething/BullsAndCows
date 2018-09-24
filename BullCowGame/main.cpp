//
//  main.cpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/7/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//

/* This is the console executable that makes use of the BullCow class
 This acts as the View in the MVC pattern, and is responsible for all
 user interaction. For game logic, see the FBullCowGame class.
*/

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

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
	constexpr int32 WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

// get a guess from the player
FText GetGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();
	
	FText Guess = "";
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	
	return Guess;
}

// loop through each turn asking for a guess
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();
	
	// TODO change the for to while loop once we are validating tries
	for (int32 count = 0; count < MaxTries; count += 1) {
		FText Guess = GetGuess(); // TODO make loop checking valid guesses
		
		// submit valid guess to the game, and receive counts
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		// print number of bulls and cows
		std::cout << "Bulls = " << BullCowCount.Bulls << std::endl;
		std::cout << "Cows = " << BullCowCount.Cows << std::endl;
		std::cout << std::endl;
	}
	
	// TODO summarise the game
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	FText Answer = "";
	std::getline(std::cin, Answer);
	std::cout << std::endl;
	
	return (Answer[0] == 'y') || (Answer[0] == 'Y');
}

