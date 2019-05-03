#include <iostream>
//
class RuleOfFive
{
public:
	RuleOfFive(int n) : num(n) { ptr_num = new int(n); }
	RuleOfFive(const RuleOfFive& d); //copy constructor - rule of 3
	RuleOfFive& operator=(RuleOfFive& d);//copy assignment - rule of 3
	~RuleOfFive();//rule of 3
	RuleOfFive(RuleOfFive&& r);//move constructor - rule of 5 C++ 11
	RuleOfFive& operator=(RuleOfFive&& r);//copy assignment - rule of 5 C++ 11
	void set_value(int n);
	int get_value();
	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	int* ptr_num;
};