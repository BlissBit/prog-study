#include <iostream>

int main()
{
	int x = 0;
	std::cout << "Enter sum in rubles: ";
	std::cin >> x;
	
	const int usd = 74;
	const int eur = 91;
	const int gbp = 100;
	const int cny = 11;

	std::cout << "USD: " << x / usd << std::endl;
	std::cout << "EUR: " << x / eur << std::endl;
	std::cout << "GBP: " << x / gbp << std::endl;
	std::cout << "CNY: " << x / cny << std::endl;

	return 0;
}