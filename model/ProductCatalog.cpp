#include "ProductCatalog.h"
#include "ItemID.h"
#include "Money.h"
#include "ProductDescription.h"
#include <unordered_map>

ProductDescription ProductCatalog::getProductDescription(ItemID *id){
	
	ProductDescription *desc = (ProductDescription *)descriptions[id];
	
	return *desc;
}
ProductCatalog::ProductCatalog(){
	
	ItemID id1;	id1.setAmount(100);
	
	ItemID id2;	id2.setAmount(200);
	
	Money price; price.add(3);
	
	ProductDescription desc1(id1, price, "товар 1"); 
	
	descriptions[&id1] = &desc1;
	
	ProductDescription desc2(id2, price, "товар 2"); 
	
	descriptions[&id2] = &desc2;
}
