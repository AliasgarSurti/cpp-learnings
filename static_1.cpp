#include <iostream>

using namespace std;

class tmp{
	static int resource;
	public:
	int is_available();
	void take();
	void free();
};

int tmp::resource;

int tmp::is_available()
{
	if(resource) {cout<< "resource busy" << endl; return 1;}
	else {cout << " resource is free " << endl; return 0;}
}

void tmp::take()
{
	if(resource) cout << "resource already taken" << endl;
	else { resource = 1; cout << "resource taken" << endl;}
}

void tmp::free()
{
	if (!resource)
	{
		resource = 0;
		cout << "resource freed" << endl;
	}
}
int main()
{
	tmp obj, obj1;
	obj.take();
	obj1.is_available();
	obj1.take();
	return 0;
}

