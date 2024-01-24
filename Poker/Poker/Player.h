#pragma once
#include "Hand.h"
#include <string>

class Player {
private:
    string playerName;
    Hand* playerHand;
public:
    Player();
    ~Player();
    Hand* getPlayerHand();
    string getPlayerName() ;
    void setPlayerName(string& name);
};

