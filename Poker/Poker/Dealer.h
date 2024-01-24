#pragma once
#include "Deck.h"
#include "Player.h"
#include <iostream>
using namespace std;


class Dealer {
private:
    static const int MAX_PLAYERS = 6;
    static const int MIN_PLAYERS = 2;
    static const int NUM_CARDS_PLAYER = 4;
    static const int NUM_SHOWED_CARDS = 5;
    static const int TURN_CARDS = 3;
    static const int RIVER_CARDS = 4;

    Deck deck;
    Card* showedCards[NUM_SHOWED_CARDS];
    int numPlayers;
    Player* players[MAX_PLAYERS];

public:
    Dealer();
    ~Dealer();

    void requestNumPlayers();
    void dealCards();

    Hand** getPlayerHands();
    Card** getFlop();
    Card** getTurn();
    Card** getRiver();
    Card** getShowedCards();
    int getNumPlayers() const;
    Player** getPlayers();
};