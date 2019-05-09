//
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>

class BankAccount
{
public:
	BankAccount(int b) : balance(b) {}
	int get_balance()const;
private:
	int balance{ 0 };
};

#endif