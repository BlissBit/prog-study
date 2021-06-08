#include <iostream>

int main()
{
	const int SIZE = 100;
	int arr[SIZE]{}, i{}, n{};

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}

	for (i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cout << "Kratno 2" << std::endl;
	for (int number : arr)
	{
		if (number % 2 == 0)
		{
			std::cout << number << ' ';
		}
	}
	std::cout << '\n';

	std::cout << "Kratno 3" << std::endl;
	for (int number : arr)
	{
		if (number % 3 == 0)
		{
			std::cout << number << ' ';
		}
	}
	std::cout << '\n';

	std::cout << "Kratno 4" << std::endl;
	for (int number : arr)
	{
		if (number % 4 == 0)
		{
			std::cout << number << ' ';
		}
	}
	std::cout << '\n';

	std::cout << "Kratno 5" << std::endl;
	for (int number : arr)
	{
		if (number % 5 == 0)
		{
			std::cout << number << ' ';
		}
	}
	std::cout << '\n';

	return 0;
}
