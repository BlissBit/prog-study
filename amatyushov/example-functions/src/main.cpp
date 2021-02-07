#include <iostream>

int sum(int a, int b)
{
	return a + b;
}
int multyp(int a, int b)
{
	return a * b;
}
int main()
{
	std::cout << sum(2,2) << std::endl;
	std::cout << multyp(2, 2) << std::endl;
	return 0;
}
