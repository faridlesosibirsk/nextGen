#pragma once
#include "ItemId.h"
#include "Money.h"
#include <string>

class ProductDescription
{
private:
	ItemId id;
	Money price;
	std::string descroption;
public:
	ProductDescription(ItemId id,
						Money price,
						std::string descroption);
	ItemId getItemId();
	Money getPrice();
	std::string getDescription();
};

