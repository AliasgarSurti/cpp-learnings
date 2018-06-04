#include <iostream>

using namespace std;

class array{
	int i;
	public:
	void set_i(int j){i=j;}
	int get_i(){return i;}
};

int main()
{
	array obj[3];
	for (int i = 0; i < 3; i++)
	{
		obj[i].set_i(i+1);
	}
	for (int i = 0; i<3; i++)
	{
		cout << obj[i].get_i() << endl;
	}
	return 0;
}
