//
//  main.cpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/7/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
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
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// get a guess from the player
string GetGuess()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	
	return Guess;
}

// loop through each turn asking for a guess
void PlayGame()
{
	constexpr int LIMIT = 5;
	for (int count = 0; count < LIMIT; count += 1) {
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << "\n";
		cout << endl;
	}
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again (y/n)? ";
	string Answer = "";
	getline(cin, Answer);
	cout << endl;
	
	return (Answer[0] == 'y') || (Answer[0] == 'Y');
}

