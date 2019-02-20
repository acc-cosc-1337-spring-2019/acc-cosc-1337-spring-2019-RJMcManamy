#include "vectors.h"
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const vector<int>& values)
{
	int max = 0;
	for (int i = 0; i < values.size(); i++)
	{
		if (values[i] > max)
		{
			max = values[i];
		}
		
	}
	return max;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int num)
{
	bool prime = true;
	for (int i = 2; i <= num / 2; ++i)
	{
		if (num % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.

I made this include the pass value because the assignment on the web version of the instructions says up to and including the number. 
I didn't know whether to follow that or the instruction here so I simply included it.
*/
vector<int> vector_of_primes(int number)
{
	vector<int> primes = {};

	for (int i = 2; i <= number; ++i)
	{
		if (is_prime(i))
		{
			primes.push_back(i);
		}
	}
	return primes;
}

