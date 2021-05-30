#include <iostream>

/// <summary>
/// –ассчитать мес€чные выплаты (m) и суммарную выплату (s) по кредиту.
/// ќ кредите известно, что он составл€ет n рублей, беретс€ на y лет, под p процентов.
/// ћес€чные выплаты наход€тс€ по формуле :
/// m = (n * p * (1 + p)y) / (12 * ((1 + p)y Ц 1)), где p выражаетс€ в дол€х единицы, а не процентах.
/// —уммарна€ выплата представл€ет собой выплаты за все мес€цы каждого года :
/// s = (m * 12) * y
/// </summary>

int main()
{
	double n {}, y {}, p {}, s {};
	int m {};

	std::cout << "Loan amount = ";
	std::cin >> n;

	std::cout << "Percent = ";
	std::cin >> p;

	std::cout << "Number of years = ";
	std::cin >> y;

	p = p / 100;

	m = (n * p * (1 + p)y) / (12 * ((1 + p)y - 1));
	s = (m * 12) * y;

	std::cout << "Monthly payment = " << m << std::endl;
	std::cout << "Bank profit = " << s << std::endl;

	return 0;
}
