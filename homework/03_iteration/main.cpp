#include "dna.h"
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char y_or_n;
	int option;
	string user_dna;
	do
	{
		cout << "Enter a 1 for Get GC Content or a 2 for Get DNA Complement: ";
		cin >> option;
		cout << "Enter a DNA string: ";
		cin >> user_dna;
		if (option == 1)
		{
			cout << "\n" << get_gc_content(user_dna);
		}
		else if (option == 2)
		{
			cout << "\n" << get_dna_complement(user_dna);
		}

		cout << "\n\n" << "Continue? Y or N: ";
		cin >> y_or_n;
		cout << "\n";

	} while (y_or_n == 'y' || y_or_n == 'Y');

	return 0;
}