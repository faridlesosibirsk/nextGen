#include "Register1.h"
#include "ProductCatalog.h"
#include "ProductDescription.h"

void Register1::makePayment(Money cachTendered){
	
	curentSale.makePayment(cachTendered);
}
void Register1::enterItem(ItemID *id, int quantity){
	
	ProductDescription desc = catalog.getProductDescription(id);
	
	curentSale.makeLineItem(desc, quantity);
}
void Register1::makeNewSale(){
	
	Register1::curentSale = Sale();
}
void Register1::endSale(){
	
	Register1::curentSale.becomeComplete();	
}
Register1::Register1(ProductCatalog catalog){
	
	Register1::catalog = catalog;
}
