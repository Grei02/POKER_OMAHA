#include "Card.h"

Card::Card(int _value, char _symbol)
{
	value = 0;
	symbol =' ';
}

void Card::setValue(int _value)
{
	value = _value;
}

void Card::setSymbol(char _symbol)
{
	symbol = _symbol;
}

int Card::getValue()
{
	return value;
}

char Card::getSymbol()
{
	return symbol;
}
