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
int32 FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }

void FBullCowGame::Reset()
{
    constexpr int MAX_TRIES = 8;
    const FString HIDDEN_WORD = "planet";
    
    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
    MyCurrentTry = 1;
    return;
}

bool FBullCowGame::IsGameWon() const
{
    return false;
}

EWordStatus FBullCowGame::CheckGuessValidity(FString) const {
    return EWordStatus::OK; // TODO - Make actual validity
}

// receives a valid guess, increments turn, and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
    // increments the turn
    MyCurrentTry++;
    // set up a return variable
    FBullCowCount BullCowCount;
    
    // loop through all the letters in the guess
    int32 HiddenWordLength = GetHiddenWordLength();
    for (int32 MHWChar = 0; MHWChar < HiddenWordLength; MHWChar++)
    {
        // compare the letter against the hidden word
        for (int32 GChar = 0; GChar < HiddenWordLength; GChar++)
        {
            // if they match then
            if (MyHiddenWord[MHWChar] == Guess[GChar]) {
                // if they are in the same place
                if (MHWChar == GChar) {
                    // increment bulls
                    BullCowCount.Bulls++;
                }
                else {
                // if they are not
                    // increment cows
                    BullCowCount.Cows++;
                }
            }
        }
    }
    return BullCowCount;
}









