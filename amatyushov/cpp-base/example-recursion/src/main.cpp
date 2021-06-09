#include <iostream>

// факториал числа
int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return factorial(n-1)*n;
}

// сумма элементов массива
int sumRec(int i, const int A[], int n)
{
	if (i == n - 1)
		return A[i];
	else
		return A[i] + sumRec(i + 1, A, n);
}

// наибольший общий делитель по алгоритму Евклида
int maxDiv(int n, int m)
{
	if (n == m)
		return n;
	else
		if (n > m)
			return maxDiv(n - m, m);
		else
			return maxDiv(n, m - n);
}

// подсчет количества элементов массива, больших заданного числа
int countArray(int num, const int A[], int n, int i)
{
	if (i == n)
		return 0; // условие окончания рекурсивного процесса
	else
	{
		if (num < A[i])
			return countArray(num, A, n, i + 1) + 1; // добавить 1 к результату, и перейти далее
		else
			return countArray(num, A, n, i + 1); // перейти к следующему элементу массива
	}
}


int main()
{
	const int array[12]{ 10, 56, 89, 45, 15, 67, 51, 48, 33, 24, 12, 62 };
	std::cout << "factorial 10 = " << factorial(10) << std::endl;
	std::cout << "Array sum = " << sumRec(0, array, 12) << std::endl;
	std::cout << "Max Div 64 and 256 = " << maxDiv(64, 256) << std::endl;
	std::cout << "Array num count > 50 = " << countArray(50, array, 12, 0) << std::endl;
	
	return 0;
}
