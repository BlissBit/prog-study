#include <iostream>
#include <cmath>

int main()
{
	int n, i;
	bool isPrime = true;

	std::cout << "Please enter an integer ";
	std::cin >> n;
	std::cout << n << std::endl;

	for (i = 2; i <= (std::sqrt(std::abs(n))); i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}

	if (isPrime)
	{
		std::cout << "This is a prime number" << std::endl;
	}
	else
	{
		std::cout << "This is a complex number" << std::endl;
	}

	return 0;
}
