#include <iostream>
/*
#include <string>
*/
#include <cmath>

int main()
{
	int size_of_number{}, number{};

	std::cout << "Enter your number: ";
	std::cin >> number;
/*
	std::string str_number = std::to_string(number);
	str_number.reserve();
	int reverse{};
	reverse = std::stoi(str_number);
*/	
	for (int i = 1; i < 100; ++i)
	{
		int current_div = pow(10, i);
		if ((number % current_div) == number)
		{
			size_of_number = i;
			break;
		}
	}

	int reverse = 0;
	int temp_number = number;
	for (int i = 1; i <= size_of_number; ++i)
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
		std::cout << number << " is palindrom" << std::endl;
	}
	else 
	{
		std::cout << " is not palindrom" << std::endl;
	}

	return 0;
}