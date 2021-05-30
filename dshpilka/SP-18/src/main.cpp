#include <iostream>

int main()
{
	int n {}, i {}, a {}, b {}, c {};
	bool q = 0;

	std::cout << "Enter n = ";
	std::cin >> n;

	a = b = c = 1;

	for (i = 1; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (c == n)
		{
			q = 1;
		}
	}
	if (q)
	{
		std::cout << "This is the Fibonacci number" << std::endl;
	}
	else
	{
		std::cout << "This is not the Fibonacci number" << std::endl;
	}

	return 0;
}
