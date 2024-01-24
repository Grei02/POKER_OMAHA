#pragma once
#include "Card.h"
#include "Deck.h"
#include <algorithm>
#include <ctime>
const int maxCards = 52;

class Deck {
private:
    Card cards[maxCards];
    int currentIndex;

public:
    Deck();
    void swapCards(Card& card1, Card& card2);
    void generateDeck();
    void shuffleDeck();
    Card dealCard();
};