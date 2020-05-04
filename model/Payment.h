#ifndef PAYMENT_H
#define PAYMENT_H

#include "Money.h"

class Payment{
private:	
	Money amount;
public:	
	Money getAmount();

	setAmount(Money cachTendered);
};
#endif
