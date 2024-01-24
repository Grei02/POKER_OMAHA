#pragma once
#include "Card.h"

const int maxHandCards = 4;

class Hand
{	
public:
	Card* playerHand[maxHandCards];
	//Card* cards[4];

	Hand();
	~Hand();
	void assessHand();
	void showHand();
};

