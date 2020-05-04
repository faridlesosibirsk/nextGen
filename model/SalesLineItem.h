#ifndef SALESLINEITEM_H
#define SALESLINEITEM_H

#include "ProductDescription.h"
#include "Money.h"

class SalesLineItem{
private:
	int quantity;
	ProductDescription *description;
public:	
	SalesLineItem(ProductDescription *desc, int quantity);
	Money getSubtotal();
};

#endif
