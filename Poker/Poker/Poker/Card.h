#pragma once
#include <iostream>
using namespace std;
class Card
{
private: 
	int value;
	char symbol;
public:
	Card(int _value, char _symbol);
	void setValue(int _value);
	void setSymbol(char _symbol);
	int getValue();
	char getSymbol();
};

