#include <iostream>
#include <cmath>

/// <summery>
/// ���� ������������ ����� - ���� 1 �� ������. ������� ��������� 0.1, 0.2, ..., 1 �� ������.
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
/// ���� ����� ����� N. ����� ����� 1 + 1/2 + 1/3 + ... 1/N (���������� �����)
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
/// ���� ������������ ����� A � ����� ����� N. ��������� ���� ����, ����� ����� 1 + � + � pow 2 + A pow 3 + ... + A pow N.
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
/// ���� ����� ����� N. ���� ��� �������� �������� ����� 3, �� ������� True, ���� �� �������� - ������� False.
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
/// ���� ��� ����� ����� A � B (A < B). ������� � ������� ����������� ��� ����� �����, ������������� ����� A � B (������� ���� ����� A � B), � ����� ����������� N ���� �����.
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
/// ���� ����� ����� N (> 0). ��������� �������� ������� ������ � ������ ������� �� �������
/// ����� �����, ���������� ��� ��������� ����� N ������ ������.
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
/// ���� ����� ����� N (> 0). ��������� ���� ����, ����� ����� 1! + 2! + 3! + ... + N! ��������� ������� ������������ ������
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
/// �������� ����������� �������, ������� ��������� ����� ����� � �������� ������� ������ � ���������� ����� ���� ����
/// ����� �������� (��������, 482 = 4 + 8 + 2 = 14). ������������� ���� ���������, ��������� ����� 83569 (����������� ������ ���� 31).
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
/// ���� ����������� ����� N. �������� ����� Yes, ���� N �������� ������ �������� ������ ��� ����� No � ��������� ������. (������� ���� ����� ��������)
/// </summary>
/// <returns></returns>

void task_recursion2()
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
			std::cout << "True" << std::endl;
			continue;
		}
	}
	if (!(flag))
	{
		std::cout << "False" << std::endl;
	}
}

void task_recursion3()
{

}

/// <summary>
/// ���� ����������� ����� N. �������� ����� �� ����� ����� ������ ����� ������� � ������ �� ���� (2 ��������)
/// </summary>
/// <returns></returns>

void task_recursion4()
{

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
	task_recursion2();
	//task_recursion3()
	//task_recursion4();

	return 0;
}