#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Dealer.h"


Deck::Deck() : currentIndex(0){
    generateDeck();
    shuffleDeck();
}

void Deck::swapCards(Card& card1, Card& card2)
{
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}

void Deck::generateDeck()
{
    const char suits[] = { 'H', 'D', 'C', 'S' };
    const int ranks[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

    int index = 0;
    for (int i = 0; i < sizeof(suits) / sizeof(suits[0]); ++i) {
        char suit = suits[i];
        for (int j = 0; j < sizeof(ranks) / sizeof(ranks[0]); ++j) {
            int rank = ranks[j];
            cards[index++] = Card(rank, suit);
        }
    }
}

void Deck::shuffleDeck()
{
    for (int i = 0; i < maxCards; i++) {
        int randomPosition = rand() % maxCards;
        swapCards(cards[i], cards[randomPosition]);
    }
}

Card Deck::dealCard() {
    if (currentIndex < maxCards) {
        return cards[currentIndex++];
    }
    return Card();  
}
