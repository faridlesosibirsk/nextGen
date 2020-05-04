#include "Payment.h"
#include "Money.h"

Money Payment::getAmount(){

	return amount;
}
Payment::setAmount(Money cachTendered){
	
	Payment::amount = cachTendered;
}
