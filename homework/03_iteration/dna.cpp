#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	double content_value = 0;
	double gc_num = 0;

	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'G' || dna[i] == 'C')
		{
			gc_num++;
		}
	}
	content_value = gc_num / dna.length();

	return content_value;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	string reverse = "";
	for (int i = dna.length() - 1; i >= 0; i--)
	{
		reverse += dna[i];
	}
	return reverse;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string reverse = get_reverse_string(dna);
	string converted = "";

	for (int i = 0; i < reverse.length(); i++)
	{
		if (reverse[i] == 'A')
		{
			converted += "T";
		}
		else if (reverse[i] == 'T')
		{
			converted += "A";
		}
		else if (reverse[i] == 'C')
		{
			converted += "G";
		}
		else if (reverse[i] == 'G')
		{
			converted += "C";
		}
	}

	return converted;
}
