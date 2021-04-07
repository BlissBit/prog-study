#include <iostream>
#include <cmath>

void task_palindrome()
{
	int size_of_number{}, number{}, i{}, current_div{}, reverse{}, temp_number{};
	
	std::cout << "Enter your number: ";
	std::cin >> number;

	for (i = 1; i < 100; ++i)
	{
		current_div = pow(10, i);
		if ((number % current_div) == number)
		{
			size_of_number = i;
			break;
		}
	}

	temp_number = number;
	for (i = 1; i <= size_of_number; ++i)
	{
		reverse += (temp_number % 10);
		temp_number -= (temp_number % 10);
		temp_number /= 10;
		if (i == size_of_number)
		{
			break;
		}
		reverse *= 10;
	}

	if (reverse == number)
	{
		std::cout << number << " is palindrome" << std::endl;
	}
}

int main()
{
	//task_palindrome();

	return 0;
}
