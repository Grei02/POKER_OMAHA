#pragma once
#include <iostream>
using namespace std;
class Card
{
private:
	int value;
	char symbol;
public:
	
	Card();
	Card(int _value, char _symbol);
	int getValue();
	char getSymbol();
	~Card();
};

