#include <iostream>

#define max(a, b) ((a) < (b) ? (b) : (a))

int main ()
{
	int j = 5, i = 0;
	i = max(i++, j++);
	std::cout << i << std::endl;
	return 0;
}
