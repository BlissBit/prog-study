#include "task_3.hpp"


void task_3::example_task3()
{
	int a{};
	std::cout << "Enter a: ";
	std::cin >> a;
	if (a > 0)
	{
		a += 1;
	}
	else
	{
		a -= 2;
	}
	std::cout << a;
}
