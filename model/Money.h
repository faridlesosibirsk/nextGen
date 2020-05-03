#ifndef MONEY_H
#define MONEY_H

class Money{
private:
	int Amount;	
public:	
	operator int() {return Amount;}

	Money(): Amount(0) {};
};
#endif
