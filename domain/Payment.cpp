#include "Payment.h"

Payment::Payment(Money cachTendered) {
//конструктор класса Payment
	amount = cachTendered;
//сохраняем в приватную переменную amount 
//новое значение
}

Money Payment::getAmount() {
	return amount;
}