#include <iostream>

int main()
{
	// ReSharper disable CommentTypo
	/*
	*	1. запросить верхнюю и нижнюю границы диапазона чисел
	*	2. Последовательно перебирать все числа от нижней до верхней границы включительно
	*		2.1. Вывод текущего числа 
	* 	2.2. повторяем до тех пор пока число н будет равно 1
	* 		2.2.1 если число чётное то делим его на 2
	* 		2.2.2 иначе умножаем на 3, прибавляем 1 и делим на 2
	* 		2.2.1 выводим значение вычесления
	*/
	/*
	 * input a, b
	 * for ( i = a; i <= b; i++)
	 * 		вывод
	 * 		temp = i
	 * 		пока (temp != 1)
	 * 			если (чётное)
	 * 				делим на 2
	 * 			иначе
	 * 				умножить на 3 прибавить единицу и разделить на 2
	 * 			вывод
	 */
	 // ReSharper restore CommentTypo

	int a{}, b{};
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;

	for (int i = a; i <=b; i++)
	{
		int temp = i;
		std::cout << temp << std::endl;

		while (temp != 1)
		{
			if (temp % 2 == 0)
			{
				temp = temp / 2;
			}
			else
			{
				temp = (temp * 3 + 1) / 2;
			}

			std::cout << temp << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
