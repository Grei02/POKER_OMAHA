#pragma once
#include "board.h"
#include "Card.h"
#include "Hand.h"
#include <iostream>
#include <algorithm>
#include <ctime>
const int maxCards = 52;
class Dealer
{
private:
	Card deck[52];
	Card* showedCards[5];
	int currentIndex;
	int numPlayers;
public:
	Dealer() : currentIndex(0){
		generateDeck();
		shuffleDeck();
		requestNumPlayers();
	}
	void generateDeck();
	void swapCards(Card& card1, Card& card2);
	void requestNumPlayers();
	void shuffleDeck();
	Hand** getPlayerCards();
	int getNumPlayers();
	Card** getFlop();
	Card** getTurn();
	Card** getRiver();
	Card** getShowedCards();
};

