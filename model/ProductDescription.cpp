#include "ProductDescription.h"
#include "Money.h"
#include "ItemID.h"
#include <iostream>

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
