#ifndef REGISTER_H
#define REGISTER_H

#include "ProductCatalog.h"
#include "Sale.h"
#include "ItemID.h"
#include "Money.h"

class Register{
private:
	ProductCatalog catalog;
	Sale curentSale;
public:	
	void makePayment(Money cachTendered);
	void enterItem(ItemID *id, int quantity);
	void makeNewSale();
	void endSale();
	Register(ProductCatalog catalog);
};
#endif
