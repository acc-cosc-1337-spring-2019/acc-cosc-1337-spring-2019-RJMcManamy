#include "bank_account.h"

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
	ATM() : account(1,5) {}
	ATM(BankAccount a) : account(a) {}
	void display_balance();

private:
	BankAccount account;
};

#endif // !ATM_H
