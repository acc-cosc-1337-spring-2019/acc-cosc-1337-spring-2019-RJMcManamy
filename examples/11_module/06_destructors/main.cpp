#include "destructor"

int main() 
{
	Destructor d(10);
	Destructor c(5);

	Destructor a = d; //create class copy
	Destructor b(d);//execute copy constructor

	c = d;

	d.set_value(5);

	a.set_ptr_num(100);
	int x = 5;
	int& y = x;
	int* z = &x;

	return 0;
}

Destructor create_class()
{
	return Destructor(5);
}