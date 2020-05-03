#ifndef ITEMID_H
#define ITEMID_H

class ItemID{
private:
	int Amount;		
public:	
	operator int() {return Amount;}

	ItemID(): Amount(0) {};
};

#endif
