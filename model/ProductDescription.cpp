#include "ProductDescription.h"

std::string ProductDescription::getDescription(){
	
	return description;
}
Money ProductDescription::getPrice(){
	
	return price;
}
ItemID ProductDescription::getItemID(){
	
	return id;
}
ProductDescription::ProductDescription(ItemID id, Money price, std::string description){
	
	ProductDescription::id = id;
	ProductDescription::price = price;
	ProductDescription::description = description;
}
