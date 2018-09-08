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

int main() {
	constexpr int WORD_LENGTH = 9;
	
	// introduce the game
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	cin >> Guess;
	
	// repeat the guess back to the player
	cout << "Your guess was: " << Guess << "\n";
	return 0;
}

int doubleMe(int num) {
	return num * 2;
}
