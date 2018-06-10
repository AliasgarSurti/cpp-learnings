#include<iostream>

using namespace std;

void func(int i)
{
	try{
		if( i>0 )
		{
			throw i;
		}
		else throw "value not zero";
	}
	catch(int i)
	{
		cout << "exception handled is int" << endl;
		cout << "exception number " << i << endl;
	}
	catch(const char *s)
	{
		cout << "exception handled is string" << endl;
		cout << "exception number " << s << endl;
	}
}

int main()
{
	cout << "begin" << endl;
	func(1);
	func(5);
	func(0);
	func(3);
	cout << "end" << endl;
	return 0;
}

