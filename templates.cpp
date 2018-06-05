#include<iostream>

using namespace std;

template <class StackType> class stack
{
private:
	int tos;
	StackType stak[10];
public:
	stack() { tos = 0;}
	void push(StackType a);
	StackType pop();
	void showStack();
};

template <class StackType> void stack<StackType> :: push(StackType a)
{
	if(tos >= 10) {cout << "Stack is full" << endl; exit ;}
	stak[tos] = a;
	tos++;
}

template <class StackType> StackType stack<StackType> :: pop()
{
	tos--;
	return stak[tos];
}

template <class StackType> void stack<StackType> :: showStack()
{
	cout << "Stack is" << endl;
	for(int i = 0; i < tos ; i++)
		cout << stak[i] << endl;
}

int main()
{
	stack<int> obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	obj.push(7);
	obj.push(8);
	obj.showStack();
	obj.pop();
	obj.pop();
	obj.pop();
	obj.pop();
	obj.pop();
	obj.showStack();
}
