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
    void Reset(); // TODO make a more rich return value.
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon();
    bool CheckGuessValidity(std::string); // TODO make a more rich return value.


// PLEASE TRY AND IGNORE THIS AND FOCUS ON THE INTERFACE ABOVE ^^
private:
    int MyCurrentTry = 1;
    int MyMaxTries = 5;
};

#endif /* FBullCowGame_hpp */
