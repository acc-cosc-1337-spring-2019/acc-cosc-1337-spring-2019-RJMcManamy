#include <iostream>

int main()
{
	char* name = new char[10]; //allocate
	std::cout << "Enter Name: ";
	std::cin.getline(name, 10);
	std::cout << name;

	delete name; //deallocates array from memory
	name = nullptr;


	char* name1 = new char[10];
	name[0] = 'a';
	//...
	name[9] = '\0';

	delete[] name1;
	name1 = nullptr;

	return 0;
}