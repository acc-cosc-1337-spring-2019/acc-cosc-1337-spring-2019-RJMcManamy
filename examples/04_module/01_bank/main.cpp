#include "bank_account.h"
#include "atm.h"
#include <vector>
#include <iostream>

int main() 
{
	BankAccount account(123, 100);
	ATM atm(account);
	atm.display_balance();
	/*
	std::vector<BankAccount> accounts;

	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}
	*/
	return 0;
}