//
//  main.cpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/7/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//

#include <iostream>
//#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrint();

int main() {
	PrintIntro();
	
	// loop for number of turns asking for a guess
	constexpr int LIMIT = 5;
	for (int count = 0; count < LIMIT; count += 1) {
		string Guess = GetGuessAndPrint();
		cout << endl;
	}
	
	return 0;
}

// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// get a guess from the player
string GetGuessAndPrint() {
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	
	// repeat the guess back to the player
	cout << "Your guess was: " << Guess << "\n";
	return Guess;
}
