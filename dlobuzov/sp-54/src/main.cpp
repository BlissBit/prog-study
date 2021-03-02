#include <iostream>

int main()
{
	int x = 0;
	std::cout << "Enter x: ";
	std::cin >> x;
	if ((x > 999) || (x < -999))
	{
		std::cout << "bad number" << std::endl;
	}
	else
	{
		int s, d, e = 0;
		e = x % 10;
		x = x / 10;
		d = x % 10;
		s = x / 10;

		std::cout << "sum " << s + d + e << std::endl;
		std::cout << "mult " << s * d * e << std::endl;
	}

	return 0;
}