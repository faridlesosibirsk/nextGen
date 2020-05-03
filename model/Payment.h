#ifndef PAYMENT_H
#define PAYMENT_H

#include "Money.h"

class Payment{
private:	
	Money amount;
public:	
	Money getAmount();

	Payment(Money cachTendered);
};
#endif
