#include <iostream>
using namespace std;
class building {
	int rooms;
	int floors;
	int area;
public:
	void set_rooms(int num){rooms = num;}
	int get_rooms(){return rooms;}
	void set_floors(int num){floors = num;}
	int get_floors(){return floors;}
	void set_area(int num){area = num;}
	int get_area(){return area;}
};
class house : public building {
	int bedrooms = 22;
	int baths;
public:
	friend void frndFunc(house obj);
	void set_bedrooms(int num);
	int get_bedrooms();
	void set_baths(int num);
	int get_baths();
};

void frndFunc(house obj)
{
	cout << "friend function called" << endl;
	//cout << obj.get_rooms() << endl;
	cout << obj.bedrooms << endl;
}

int main()
{
	house hobj;
	hobj.set_rooms(2);
	//cout << hobj.get_rooms() << endl;
	frndFunc(hobj);
	return 0;
}
