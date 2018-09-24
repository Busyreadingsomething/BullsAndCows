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
BullCowCount FBullCowGame::SubmitGuess(FString)
{
    // increments the turn
    MyCurrentTry++;
    // set up a return variable
    BullCowCount BullCowCount;
    // loop through all the letters in the guess
        // compare the letter against the hidden word
    return BullCowCount;
}






