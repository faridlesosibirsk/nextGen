#include "Sale.h"
#include "Payment.h"
#include "ProductDescription.h"
#include "SalesLineItem.h"

Money Sale::getTotal(){
	
	Money total; total = Money();
	
	Money subtotal = Money(); subtotal.add(0);
	
	for(auto& lineItem : lineItems){
		
		subtotal = lineItem.getSubtotal();
		
		total.add(subtotal.getAmount());
	};
	return total;
}
void Sale::makeLineItem(ProductDescription desc, int quantity){
	
	lineItems.push_back(SalesLineItem(&desc, quantity));
}
bool Sale::isComplete(){
	
	return Complete;
}
void Sale::becomeComplete(){
	
	Complete = true;
}
Money Sale::getBalance(){
	
	return payment.getAmount();
}
void Sale::makePayment(Money CacheTendered){
	
	payment = Payment(CacheTendered);
}
