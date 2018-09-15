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

class FBullCowGame {
public:
    void Reset(); // TODO make a more rich return value.
    int GetMaxTries();
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBullCowGame_hpp */
