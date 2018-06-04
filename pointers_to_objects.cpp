#include <iostream>

using namespace std;

class pointer{
	int i;
	public:
	pointer(int j){i=j;}
	int get_i(){return i;}
};

int main()
{
	pointer obj(10), *ptr;
	//int *p;
	*ptr = obj;
	//*p = obj.i;
	cout << ptr->get_i() <<endl;
	return 0;
}

