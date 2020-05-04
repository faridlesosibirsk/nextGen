#ifndef STORE_H
#define STORE_H

#include "Register1.h"
#include "ProductCatalog.h"

class Store{
private:
	ProductCatalog catalog;
	Register1 register1 = Register1(catalog);
public:	
	Register1 getRegister();
};

#endif
