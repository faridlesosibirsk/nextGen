#ifndef REGISTER1_H
#define REGISTER1_H

#include "ProductCatalog.h"
#include "Sale.h"
#include "ItemID.h"
#include "Money.h"

class Register1{
private:
	ProductCatalog catalog;
	Sale curentSale;
public:	
	void makePayment(Money cachTendered);
	void enterItem(ItemID *id, int quantity);
	void makeNewSale();
	void endSale();
	Register1(ProductCatalog catalog);
};
#endif
