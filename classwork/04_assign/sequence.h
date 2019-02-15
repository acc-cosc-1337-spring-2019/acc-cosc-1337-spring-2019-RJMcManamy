#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cin;
using std::cout;

/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/
void display_vector(const vector<string> & str);

/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string search_value, and a string replace_value.
*/
void update_vector_element(vector<string> & str, string search_value, string replace_value);
