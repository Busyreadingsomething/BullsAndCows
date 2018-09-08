//
//  main.cpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/7/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
	return 0;
}

int doubleMe(int num) {
	return num * 2;
}
