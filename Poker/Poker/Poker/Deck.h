#pragma once
#include "Card.h"

const int size = 52;

class Deck
{
private:
	Card* hand;
public:
	Deck();
	Deck(Card* _hand);
	void stirCards();
	void distributeCards();

};

