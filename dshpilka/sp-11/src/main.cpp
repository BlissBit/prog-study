#include <iostream>
#include <cmath>

int main()
{
	int n{};
	bool is_not_prime = true;
	bool is_inf_input = true;
	while(is_inf_input)
	{
		std::cout << "Please enter an integer ";
		
		while (!(std::cin >> n).good())
		{
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Input error, try again\n";
			is_inf_input = false;
			break;
		}

		for (auto i = 2; i <= (std::sqrt(std::abs(n))); i++)
		{
			if (n % i == 0)
			{
				is_not_prime = false;
				break;
			}

			if (is_not_prime)
			{
				std::cout << "This is a prime number" << std::endl;
			}
			else
			{
				std::cout << "This is a complex number" << std::endl;
			}
		}
	}
	
	return 0;
}
