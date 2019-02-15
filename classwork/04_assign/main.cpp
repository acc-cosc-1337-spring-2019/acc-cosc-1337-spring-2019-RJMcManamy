#include "sequence.h"
/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()
{
	string search_value = "";
	string replace_value = "";
	vector <string> str = {"John", "Mary", "Patty", "Sam"};
	display_vector(str);
	cout << "\n" << "Please enter a name to search for: ";
	cin >> search_value;
	cout << "\n" << "Please enter a name to replace it with: ";
	cin >> replace_value;
	cout << "\n";
	update_vector_element(str, search_value, replace_value);
	display_vector(str);

	return 0;
}

