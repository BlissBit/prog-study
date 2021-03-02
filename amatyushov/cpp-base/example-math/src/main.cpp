#include <iostream>

int main()
{
	const int a = 12;
	const int b = 15;

	int c = 0;

	c = a + b;
	c = a - b;
	
	c = a * b;
	double d = double(b) / double(a);
	
	c = b % a;
	c = 2;
	std::cout << c << std::endl;
	int f = c++; //Постфиксный инкремент
	std::cout << c << std::endl;
	std::cout << f << std::endl;
	std::cout << "\n" << std::endl;
	c = 2;
	std::cout << c << std::endl;
	int g = ++c; //Префиксный инкремент
	std::cout << c << std::endl;
	std::cout << g << std::endl;

	c = 2;
	std::cout << "\n" << std::endl;
	std::cout << c << std::endl;

	f = c--;  // Постфиксный декремент
	std::cout << c << std::endl;
	std::cout << f << std::endl;


	std::cout << "\n"<< std::endl;
	c = 2;
	std::cout << c << std::endl;
	g = --c; //	Префиксный декремент	
	std::cout << c << std::endl;
	std::cout << g << std::endl;

	 /*				  
	*	Приоритеты
	*   ()
	*	Инкремент Декремент
	*	Умножение, Деление, Остаток от деления
	*	Сложение, вычитание
	*/

	c = (a + 6) * ++g;

	// a = 12;
	// b = 15;
	c = (b + a) * (b - a) / f++;
	return 0;
}
