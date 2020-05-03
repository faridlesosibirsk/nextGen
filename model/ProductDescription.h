#ifndef PRODUCTDESCRIPTION_H
#define PRODUCTDESCRIPTION_H

#include "Money.h"
#include "ItemID.h"
#include <iostream>;

class ProductDescription{
private:
	ItemID id;
	Money price;	
	std::string description;
public:	
	std::string getDescription();

	Money getPrice();

	ItemID getItemID();
	
	ProductDescription(ItemID id, Money price, std::string description);
};
#endif
