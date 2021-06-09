#include <iostream>

int main()
{
	double n{}, y{}, p{}, s{};
	int m{};

	std::cout << "Loan amount = ";
	std::cin >> n;

	std::cout << "Percent = ";
	std::cin >> p;

	std::cout << "Number of years = ";
	std::cin >> y;

	p = p / 100;

	std::cout << "Monthly payment = " << (n * p * (1 + p) * y) / (12 * ((1 + p) * y - 1)) << std::endl;
	std::cout << "Bank profit = " << (m * 12) * y << std::endl;

	return 0;
}
