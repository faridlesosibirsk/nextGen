#pragma once

#include "Money.h"

class Payment
{
private:
	Money amount; //приватная переменная
public:
	Payment(Money cachTendered); //процедура 
//с аргументом(переменной) cachTendered типа Money
	Money getAmount();
	// функция getAmount возвращает результат типа Money
};

