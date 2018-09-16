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

class FBullCowGame {
public:
    FBullCowGame(); // Constructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make a more rich return value.
    bool CheckGuessValidity(std::string); // TODO make a more rich return value.
    // provide a method for counting the bulls and cows and incrementing the try number


// ^^ PLEASE TRY AND IGNORE THIS AND FOCUS ON THE INTERFACE ABOVE ^^
private:
    // see constructor for initialization
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBullCowGame_hpp */
