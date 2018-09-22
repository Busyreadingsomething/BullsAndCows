//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Makan Azarshahy on 9/8/18.
//  Copyright © 2018 Makan Azarshahy. All rights reserved.
//
#pragma once
#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
    FBullCowGame(); // Constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make a more rich return value.
    bool CheckGuessValidity(FString); // TODO make a more rich return value.
    // provide a method for counting the bulls and cows and incrementing the try number


// ^^ PLEASE TRY AND IGNORE THIS AND FOCUS ON THE INTERFACE ABOVE ^^
private:
    // see constructor for initialization
    int32 MyCurrentTry;
    int32 MyMaxTries;
};

#endif /* FBullCowGame_hpp */
