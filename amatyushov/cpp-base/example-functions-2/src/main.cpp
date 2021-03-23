#include <iostream>
#include "task_3.hpp"

/// <summary>
/// даны два целы одно больше другого перечислить от одного до другого включительно 
/// </summary>
void task_for1()
{
	int a{}, b{};
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	if (!(a < b))
	{
		std::cout << "not valid data";
	}

	for (int i = a; i <=b; ++i)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

/// <summary>
/// Задача на цикл if1
/// </summary>
void task_for2()
{
	int a{};
	std::cout << "Enter a: ";
	std::cin >> a;
	if (a > 0)
	{
		a += 1;
	}
	std::cout << a << std::endl;
}

int main()
{
	task_for1();
	task_for2();
	task_3::example_task3();
	return 0;
}
