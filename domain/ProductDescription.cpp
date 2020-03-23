#include "ProductDescription.h"
#include "string"
#include "Money.h"
ProductDescription::ProductDescription(
	ItemId id,
	Money price,
	std::string descroption) 
{
	this->id = id;
	this->price = price;
	this->descroption = descroption;
}

ItemId ProductDescription::getItemId()
{
	return id;
}

Money ProductDescription::getPrice()
{
	return price;
}

std::string ProductDescription::getDescription()
{
	return descroption;
}