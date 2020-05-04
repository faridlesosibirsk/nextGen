#include "Register.h"
#include "ProductCatalog.h"
#include "ProductDescription.h"

void Register::makePayment(Money cachTendered){
	
	curentSale.makePayment(cachTendered);
}
void Register::enterItem(ItemID *id, int quantity){
	
	ProductDescription desc = catalog.getProductDescription(id);
	
	curentSale.makeLineItem(desc, quantity);
}
void Register::makeNewSale(){
	
	Register::curentSale = Sale();
}
void Register::endSale(){
	
	Register::curentSale.becomeComplete();	
}
Register::Register(ProductCatalog catalog){
	
	Register::catalog = catalog;
}
