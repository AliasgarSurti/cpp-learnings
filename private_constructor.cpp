// This program is for understanding the creation of object while the constructor is private.

#include <iostream>

//using namespace std;


class dummy{
	dummy() {};
	static dummy _obj;	
	//static int i;
public:
	~dummy() {};


	static dummy* get()
	{
		return &_obj;
	}
	void print(){
		std::cout << "printing with help of static object" << std::endl;
		//cout << "value of integer is " << i << endl;
	}
};

dummy dummy::_obj;
int main()
{
	(dummy::get())->print();
	return 0;
}