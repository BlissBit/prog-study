#include <iostream>

bool fun(int a, int b)
{
	return a > b;
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{

	int A, B = 0;
	std::cout << "Enter A: ";
	std::cin >> A;
	std::cout << "Enter B: ";
	std::cin >> B;

	
	if (fun(A, B))
	{
		std::cout << "A > B" << std::endl;
	}
	else
	{
		std::cout << "A <= B" << std::endl;
	}
	
	std::cout << "A + B = " << sum(A, B) << std::endl;

	return 0;
}
