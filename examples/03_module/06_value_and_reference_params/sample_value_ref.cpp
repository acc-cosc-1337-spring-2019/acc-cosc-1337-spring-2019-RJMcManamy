#include "sample_value_ref.h"

void pass_by_value_ref(int num1, int & num2, const int num3)
{
	num1 = 20;
	num2 = 50;
}
