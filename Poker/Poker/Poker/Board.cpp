#include "Board.h"

void Board::startGame()
{
    Dealer dealer;

    Hand** playerCards = dealer.getPlayerCards();

    for (int i = 0; i < dealer.getNumPlayers(); ++i) {
        cout << "Jugador " << i + 1 << "'s cards: ";
        for (int j = 0; j < 4; ++j) {
            cout << playerCards[i]->playerHand[j]->getValue() << playerCards[i]->playerHand[j]->getSymbol() << " ";
        }
        cout << endl;
    }
    
    Card** flop = dealer.getFlop();
    cout << "Flop: ";
    for (int i = 0; i < 3; i++) {
        cout << flop[i]->getValue() << flop[i]->getSymbol() << " ";
    }
    cout << endl;

    Card** turn = dealer.getTurn();
    cout << "Turn: ";
    cout << turn[0]->getValue() << turn[0]->getSymbol() << " ";
    cout << endl;

    Card** river = dealer.getRiver();
    cout << "River: ";
    cout << river[0]->getValue() << river[0]->getSymbol() << " ";
    cout << endl;

    Card** showedCards = dealer.getShowedCards();
    cout << "Showed Cards: ";
    for (int i = 0; i < 5; i++) {
        cout << showedCards[i]->getValue() << showedCards[i]->getSymbol() << " ";
    }
    cout << endl;

    for (int i = 0; i < dealer.getNumPlayers(); i++) {
        delete playerCards[i];
    }
    delete[] playerCards;

}
