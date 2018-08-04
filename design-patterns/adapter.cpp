#include<iostream>

using namespace std;

/***
Class Shape is the main class from where the method of text view which is not available directly.
***/
class shape{
private:
public:
	shape(){ cout << "Making object for shape" << endl;}
	virtual void makeShape() = 0;
};

class circle : public shape{
private:
public:
	circle(){ cout << "Making object for circle" << endl;}
	virtual void makeShape() final{
		cout << "Making shape of circle" << endl;
	}
};

class TextView{
private:
public:
	TextView(){ cout << "Making object for TextView" << endl; }
	virtual void getPoint() final{
		cout << "getting point for TextView" << endl;
	}
		
};

class text : public TextView{
private:
public:
	text(){ cout << "Making object for text" << endl;}
	virtual void getPoint() final{
		cout << "getting point for text" << endl;
	}
};

/***
A class adapter(TextShape) uses multiple inheritance to adapt interfaces. The key to class
adapters is to use one inheritance branch to inherit the interface and another
branch to inherit the implementation.
***/
class TextShape : public shape , private TextView{
private:
public:
	TextShape(){ cout << "Making object for TextShape" << endl; }
	virtual void getPoint() final{
		cout << "getting point for TextView" << endl;
	}
};

int main()
{
	shape *ptr;
	ptr = new(TextShape);
	ptr->makeShape();
	ptr->getPoint();
	return 0;
}