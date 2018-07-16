#include <iostream>

using namespace std;

class factory
{
	private:
	public:
		virtual void create() = 0;
};

class object1 : public factory
{
	public:
		void create()
		{
			cout << "object1 created" <<endl;
		}
};

class object2 : public factory
{
	public:
		void create()
		{
			cout << "object2 created" << endl;
		}
};

int main()
{
	factory *ptr;
	object2 obj;
	ptr = &obj;
	ptr->create();
	return 0;
}
