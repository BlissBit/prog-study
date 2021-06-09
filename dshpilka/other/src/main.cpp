#include <iostream>
#include <cmath>

/// <summery>
/// Дано вещественное число - цена 1 кг конфет. Вывести стоимость 0.1, 0.2, ..., 1 кг конфет.
/// <summery>

void task_for5()
{
	double price_of_1_kg_of_sweets{}, i{}, Price{};

	std::cout << "Enter price of 1 kg of sweets " << std::endl;
	std::cin >> price_of_1_kg_of_sweets;

	for (i = 0.1; i < 1; i += 0.1)
	{
		Price = price_of_1_kg_of_sweets * i;
		std::cout << "Price " << i << " kg " << Price << std::endl;
	}
}

/// <summery>
/// Дано целое число N. Найти сумму 1 + 1/2 + 1/3 + ... 1/N (вещтвенное число)
/// <summery>

void task_for10()
{
	int N{}, i{};
	double sum{};

	std::cout << "Enter N = ";
	std::cin >> N;

	for (i = 1; i <= N; i++)
	{
		sum += 1 / double(i);
		std::cout << 1 / double(i);

		if (i == N)
		{
			std::cout << " = " << std::endl;
		}
		else
		{
			std::cout << " + ";
		}
	}

	std::cout << "Sum = " << sum << std::endl;
}

/// <summery>
/// Дано вещественное число A и целое число N. Используя один цикл, найти сумму 1 + А + А pow 2 + A pow 3 + ... + A pow N.
/// <summery>

void task_for17()
{
	double A{}, sum{}, b{};
	int N{}, i{};

	std::cout << "Enter A = ";
	std::cin >> A;
	std::cout << "Enter N = ";
	std::cin >> N;

	for (i = 0; i <= N; i++)
	{
		b = pow(A, i);
		sum += b;
		std::cout << b;

		if (i == N)
		{
			std::cout << " = " << std::endl;
		}
		else
		{
			std::cout << " + ";
		}
	}

	std::cout << "Sum = " << sum + 1 << std::endl;
}

/// <summery>
/// Дано целое число N. Если оно является степенью числа 3, то вывести True, если не является - вывести False.
/// <summery>

void task_while4()
{
	int N{};

	std::cout << "Enter N = ";
	std::cin >> N;
	bool flag = false;

	while (N % 3 == 0)
	{
		N = N / 3;

		if (N == 1)
		{
			flag = true;
			std::cout << "True" << std::endl;
			continue;
		}
	}
	if (!(flag))
	{
		std::cout << "False" << std::endl;
	}
}

/// <summery>
/// Даны два целых числа A и B (A < B). Вывести в порядке возрастания все целые числа, расположенные между A и B (включая сами числа A и B), а также колличество N этих чисел.
/// <summery>

void task_for2()
{
	int A{}, B{}, N{}, i{};

	std::cout << "Enter A = ";
	std::cin >> A;
	std::cout << "Enter B = ";
	std::cin >> B;

	for (i = A; i <= B; ++i)
	{
		std::cout << i << std::endl;
	}

	std::cout << "N = " << B - A + 1 << std::endl;
}

/// <summery>
/// Дано целое число N (> 0). Используя операция деления нацело и взятие остатка от деления
/// найти число, полученное при прочтении числа N справа налево.
/// <summery>

void task_while19()
{
	int N{}, temp_N{}, revers{};

	std::cout << "Enter N = ";
	std::cin >> N;

	while (N > 0)
	{
		temp_N = N % 10;
		revers = revers * 10 + temp_N;
		N /= 10;
	}

	std::cout << "Your number = " << revers << std::endl;
}

/// <summery>
/// Дано целое число N (> 0). Используя один цикл, найти сумму 1! + 2! + 3! + ... + N! Результат вывести вещественным числом
/// <summery>

void task_for20()
{
	int N{}, i{}, sum{}, fakt{ 1 };

	std::cout << "Enter N = ";
	std::cin >> N;

	for (i = 1; i < N + 1; i++)
	{
		fakt = fakt * i;
		sum += fakt;
	}

	std::cout << "Sum = " << double(sum) << std::endl;
}

std::uint64_t factorial(int n)
{
	if (n < 0)
	{
		return 0;
	}

	if (n == 0)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int fibonachi(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fibonachi(n - 1) + fibonachi(n - 2);
}

/// <summary>
/// Напишите рекурсивную функцию, которая принимает целое число в качестве входных данных и возвращает сумму всех цифр
/// этого значения (например, 482 = 4 + 8 + 2 = 14). Протестируйте вашу программу, используя число 83569 (результатом должно быть 31).
/// </summary>
/// <param name="n">number</param>
/// <returns></returns>

int sum(int n);

void task_recursion()
{
	int n{};
	std::cout << "Enter n ";
	std::cin >> n;

	std::cout << sum(n) << std::endl;
}

int sum(int n)
{
	if (n < 10)
	{
		return n;
	}

	return sum(n / 10) + n % 10;
}

/// <summary>
/// Дано натуральное число N. Выведите слово Yes, если N является точной степенью двойки или слово No в противном случае. (сначала цикл потом рекурсия)
/// </summary>
/// <returns></returns>

void task_while_chek_pow2()
{
	int N{};

	std::cout << "Enter N = ";
	std::cin >> N;
	bool flag = false;

	while (N % 2 == 0)
	{
		N = N / 2;

		if (N == 1)
		{
			flag = true;
			std::cout << "Yes" << std::endl;
			continue;
		}
	}
	if (!(flag))
	{
		std::cout << "No" << std::endl;
	}
}

int recursion_chek_pow2(int n);

void task_recursion_chek_pow2()
{
	int n{};

	std::cout << "Enter n = ";
	std::cin >> n;

	recursion_chek_pow2(n);
}

int recursion_chek_pow2(int n)
{
	if (n / 1 == 2)
	{
		std::cout << "Yes";
	}
	if (n % 2 == 0)
	{
		if (n > 2)
		{
			return recursion_chek_pow2(n / 2);
		}
	}

	if (n / 1 != 2)
	{
		std::cout << "No";
	}
}

/// <summary>
/// Дано натуральное число N. Выведите цифры по одной через пробел слева направо и справа на лево (2 рекурсии)
/// </summary>
/// <returns></returns>

int recursion_from_right_to_left(int n);

void task_recursion_from_right_to_left()
{
	int n{};

	std::cout << "Enter n = ";
	std::cin >> n;

	recursion_from_right_to_left(n);
}

int recursion_from_right_to_left(int n)
{
	std::cout << n % 10 << " ";

	if (n < 10)
	{
		return n;
	}
	if (n /= 10)
	{
		recursion_from_right_to_left(n);
	}
}


void recursion_from_left_to_right(int n);

int get_size_number(int n)
{
	int size{1};

	while (true)
	{
		int current_div = pow(10, size);
		if (n % current_div == n)
		{
			return size;
		}

		size++;

	}
}

void task_recursion_from_left_to_right()
{
	int n{};

	std::cout << "Enter n = ";
	std::cin >> n;

	recursion_from_left_to_right(n);
}

void recursion_from_left_to_right(int n)
{
	if (n == 0)
	{
		return;
	}

	int size = get_size_number(n);

	int temp = n % int (pow(10, size - 1));

	std::cout << int((n - temp) / pow(10, size - 1)) << " ";

	recursion_from_left_to_right(temp);
}

int main()
{
	//task_for5();
	//task_for10();
	//task_for17();
	//task_while4();
	//task_for2();
	//task_while19();
	//task_for20();
	//int f = factorial(5);
	//int fib = fibonachi(13);
	//task_recursion();
	//task_while_chek_pow2();
	//task_recursion_chek_pow2();
	//task_recursion_from_right_to_left();
	task_recursion_from_left_to_right();
	
	return 0;
}
