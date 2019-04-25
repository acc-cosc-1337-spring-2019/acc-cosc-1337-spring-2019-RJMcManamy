#include "memory_leak.h"

//

void memory_leak()
{
	int* ptr = new int(10);
	//use it
	//forget to delete and set to null
}
