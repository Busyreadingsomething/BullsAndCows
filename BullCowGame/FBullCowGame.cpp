//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/8/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
    constexpr int MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    const FString HIDDEN_WORD = "planet";
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
    return;
}

bool FBullCowGame::IsGameWon() const
{
    return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
    return true;
}

// receives a valid guess, increments turn, and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
    // increments the turn
    MyCurrentTry++;
    // set up a return variable
    FBullCowCount BullCowCount;
    
    // loop through all the letters in the guess
    int32 HiddenWordLength = MyHiddenWord.length();
    for (int32 i = 0; i < HiddenWordLength; i++) {
        // compare the letter against the hidden word
        for (int32 j = 0; j < HiddenWordLength; j++) {
            // if they match then
            if (MyHiddenWord[i] == Guess[j]) {
                // if they are in the same place
                if (i == j) {
                    // increment bulls
                    BullCowCount.Bulls++;
                } else {
                // if they are not
                    // increment cows
                    BullCowCount.Cows++;
                }
            }
        }
    }
    return BullCowCount;
}






