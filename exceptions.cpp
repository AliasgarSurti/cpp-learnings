#include<iostream>

using namespace std;

void func()
{
	cout << "inside function" << endl;
	//throw 10;
	throw 11.1;
}

int main()
{
	cout << "inside main" << endl;
	try{
		cout << "inside try block" << endl;
		func();
	}
	catch(int i)
	{
		cout << "inside int catch block" << endl;
	}
	catch(double i)
	{
		cout << "inside double catch block" << endl;
	}
	cout << "after catch in main" << endl;
	return 0;
}
