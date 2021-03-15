#include <iostream>

int main()
{
	int number{}, a{}, b{}, c{}, d{}, e{}, f{}, g{}, h{};

	std::cout << "Enter your number: ";
	std::cin >> number;

	if (number > 0 && number < 10)
	{
		std::cout << "Your number is a palindrome" << std::endl;
	}

	else if (number >= 10 && number < 100)
	{
		a = number / 10;
		b = number % 10;
		if (a == b)
		{
			std::cout << "Your number is a palindrome" <<std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else if (number >= 100 && number < 1000)
	{
		a = number / 100;
		b = number % 100 / 10;
		c = number % 10;
		if (a == c)
		{
			std::cout << "Your number is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else if (number >= 1000 && number < 10000)
	{
		a = number / 1000;
		b = number % 1000 / 100;
		c = number % 100 / 10;
		d = number % 10;
		if (a == d)
		{
			std::cout << "Your number is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else if (number >= 10000 && number < 100000)
	{
		a = number / 10000;
		b = number % 10000 / 1000;
		c = number % 1000 / 100;
		d = number % 100 / 10;
		e = number % 10;
		if (a == e)
		{
			std::cout << "Your number is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else if (number >= 100000 && number < 1000000)
	{
		a = number / 100000;
		b = number % 100000 / 10000;
		c = number % 10000 / 1000;
		d = number % 1000 / 100;
		e = number % 100 / 10;
		f = number % 10;
		if (a == f)
		{
			std::cout << "Your number is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else if (number >= 1000000 && number < 10000000)
	{
		a = number / 1000000;
		b = number % 1000000 / 100000;
		c = number % 100000 / 10000;
		d = number % 10000 / 1000;
		e = number % 1000 / 100;
		f = number % 100 / 10;
		g = number % 10;
		if (a == g)
		{
			std::cout << "Your number is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else if (number >= 10000000 && number < 100000000)
	{
		a = number / 10000000;
		b = number % 10000000 / 1000000;
		c = number % 1000000 / 100000;
		d = number % 100000 / 10000;
		e = number % 10000 / 1000;
		f = number % 1000 / 100;
		g = number % 100/ 10;
		h = number % 10;
		if (a == h)
		{
			std::cout << "Your number is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "Your number is not a palindrome" << std::endl;
		}
	}
	else
	{
		std::cout << "Oops, something went wrong!" << std::endl;
	}

	return 0;
}