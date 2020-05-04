#ifndef PRODUCTCATALOG_H
#define PRODUCTCATALOG_H

#include <unordered_map>
#include "ItemID.h"
#include "ProductDescription.h"
#include "ProductDescription.h"

class ProductCatalog{
private:
	std::unordered_map<const void *, const void *> descriptions;
public:
	ProductDescription getProductDescription(ItemID *id);
	
	ProductCatalog();	
};

#endif
