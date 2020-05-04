#include "Payment.h"
#include "Money.h"

Money Payment::getAmount(){

	return amount;
}
Payment::Payment(Money cachTendered){
	
	Payment::amount = cachTendered;
}
