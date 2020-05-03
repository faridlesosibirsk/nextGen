#include "Payment.h"

Money Payment::getAmount(){

	return amount;
}
Payment::Payment(Money cachTendered){
	
	amount = cachTendered;
}
