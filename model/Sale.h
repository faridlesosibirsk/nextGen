#ifndef SALE_H
#define SALE_H

#include <vector>
#include "SalesLineItem.h"
#include <ctime>
#include "Payment.h"
#include "ProductDescription.h"

class Sale{
private:
	Money getTotal();
	void makeLineItem(ProductDescription desc, int quantity);
	std::vector<SalesLineItem> lineItems;
	tm *date;// = localtime(&now); time_t now = time(0);
	bool Complete = false;
	Payment payment;
public:
	void makeLineItem();
	bool isComplete();
	void becomeComplete();
	Money getBalance();
	void makePayment(Money CacheTendered);
};
#endif
