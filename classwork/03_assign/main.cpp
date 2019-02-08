#include "loops.h"
#include <iostream>

using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num = 0;
	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		cout << "What number would you like the factorial of: ";
		cin >> num;
		cout << "Factorial: " << get_factorial(num);

		cout << "\n\n" << "Would you like to go again? Y or N: ";
		cin >> choice;
	}
	return 0;
}