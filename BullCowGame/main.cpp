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

// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// get a guess from the player
string GetGuess() {
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	
	// repeat the guess back to the player
	cout << "Your guess was: " << Guess << "\n";
	return Guess;
}

int main() {
	PrintIntro();
	string Guess = GetGuess();
	return 0;
}

int doubleMe(int num) {
	return num * 2;
}
