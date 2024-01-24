#include "Hand.h"

Hand::Hand()
{
    for (int i = 0; i < maxHandCards; i++) {
        playerHand[i] = new Card();
    }
}

Hand::~Hand()
{
    for (int i = 0; i < 4; ++i) {
        delete playerHand[i];
    }
}

void Hand::assessHand()
{
}

void Hand::showHand()
{
}
