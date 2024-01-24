#include "Dealer.h"
#include "Card.h"

void Dealer::generateDeck()
{
    const char suits[] = { 'H', 'D', 'C', 'S' };
    const int ranks[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }; 

    int index = 0;
    for (int i = 0; i < sizeof(suits) / sizeof(suits[0]); ++i) {
        char suit = suits[i];
        for (int j = 0; j < sizeof(ranks) / sizeof(ranks[0]); ++j) {
            int rank = ranks[j];
            deck[index++] = Card(rank, suit);
        }
    }
}

void Dealer::swapCards(Card& card1, Card& card2)
{
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}

void Dealer::requestNumPlayers()
{
    do {
        cout << "Ingrese la cantidad de jugadores (entre 2 y 6): ";
        cin >> numPlayers;
    } while (numPlayers < 2 || numPlayers > 6);
}

void Dealer::shuffleDeck()
{
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(deck, deck + 52);
}

Hand** Dealer::getPlayerCards()
{
    Hand** playerCards = new Hand * [numPlayers];

    for (int i = 0; i < numPlayers; ++i) {
        playerCards[i] = new Hand();

        for (int j = 0; j < 4; ++j) {
            playerCards[i]->playerHand[j] = &deck[currentIndex++];
        }
    }

    return playerCards;
}

int Dealer::getNumPlayers()
{
    return numPlayers;
}

Card** Dealer::getFlop()
{
    for (int i = 0; i < 3; ++i) {
        showedCards[i] = &deck[currentIndex++];
    }
    return showedCards;
}

Card** Dealer::getTurn()
{
    showedCards[3] = &deck[currentIndex++];
    return showedCards + 3; 
}

Card** Dealer::getRiver()
{
    showedCards[4] = &deck[currentIndex++];
    return showedCards + 4;
}

Card** Dealer::getShowedCards()
{
    return showedCards;
}
