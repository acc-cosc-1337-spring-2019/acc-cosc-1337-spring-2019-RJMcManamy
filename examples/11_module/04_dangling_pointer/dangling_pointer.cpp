#include "dangling_pointer.h"

//

void dangling_pointer()
{
	int* ptr = new int(100);
	int* innocent_ptr = ptr;

	delete ptr;
	//other lines code
	//use innocent ptr in the future will cause problems
}
