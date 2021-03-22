#include <iostream>
int main()
{
	int a;
	std::cout << "Polzovatel vvodit chislo:  ";
	std::cin >> a;
	if (a % 5 == 0)
	{
		std::cout << "THIS IS DELITSYA NA 5";
	}
	else
	{
		std::cout << a;
	}
	return 0;
}
//Саня проверь задачу накуй! Вот условие: Пользователь вводит число, если введённое число делится без остатка на 5
//то сообщаем об этом пользователю, иначе просто его выводим