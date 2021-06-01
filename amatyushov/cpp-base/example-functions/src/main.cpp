#include <iostream>
#include "Math.hpp"

#define maximum(a,b) (((a) > (b)) ? (a) : (b))

namespace my_math
{

bool max(int a, int b)
{
	return (a > b) ? a : b;
}

std::uint32_t fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * fact(n - 1);
}

}

int sum(int a, int b);

int main()
{
	int A, B = 0;
	std::cout << "Enter A: ";
	std::cin >> A;
	std::cout << "Enter B: ";
	std::cin >> B;

	/*if (my_math::max(A, B))
	{
		std::cout << "A > B" << std::endl;
	}
	else
	{
		std::cout << "A <= B" << std::endl;
	}*/
	std::cout << maximum(A, B) << std::endl;
	std::cout << "A + B = " << sum(A, B) << std::endl;

	std::cout << "Fib: " << my_math::fib_num(8) << std::endl;

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}
