#include <iostream>

using namespace std;

class myclass
{
	int i,j;
	public:
	myclass(int a, int b);
	int show(){return i+j;}
};

myclass::myclass(int a, int b)
{
	i = a;
	j = b;
}

int main()
{
	myclass obj(3,4); // 
	//myclass obj = myclass(3,4); // This is also a way to declare a constructor
	cout << obj.show() << endl;
	return 0;
}
