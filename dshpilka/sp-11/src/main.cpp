#include <iostream>
#include <cmath>

int main()
{
	int n{};
	bool isPrime = true;

	std::cout << "Please enter an integer ";
	std::cin >> n;
	{
		while (!(std::cin >> n))
		{
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Input error, try again\n";
		}
		int(i);

		for (i = 2; i <= (std::sqrt(std::abs(n))); i++)
		{
			if (n % i == 0)
			{
				isPrime = false;
				break;
			}
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
