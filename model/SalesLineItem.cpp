#include "SalesLineItem.h"
#include "ProductDescription.h"
#include "Money.h"

SalesLineItem::SalesLineItem(ProductDescription *desc, int quantity){
	
	SalesLineItem::description = desc;
	
	SalesLineItem::quantity = quantity;
}
Money SalesLineItem::getSubtotal(){
	
	return description->getPrice();
}
