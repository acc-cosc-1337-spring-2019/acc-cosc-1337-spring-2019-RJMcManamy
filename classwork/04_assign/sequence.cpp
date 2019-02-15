#include "sequence.h"
#include <iostream>

/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/

void display_vector(const vector<string>& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << "\n";
	}
}


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/

void update_vector_element(vector<string>& str, string search_value, string replace_value)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == search_value)
		{
			str[i] = replace_value;
		}
	}
}


