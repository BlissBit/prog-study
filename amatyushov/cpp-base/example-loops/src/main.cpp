#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

int main()
{
	std::srand(std::int32_t(time(0)));
	std::random_device rd;
	std::mt19937_64 mersene(rd());
	mersene();

	int arr[10] = {};

	for (int index = 9; index > 0; index--)
	{
		arr[index] = mersene();
		std::cout << arr[index] << " ";
	}

	// loop for
	int sum = 0;
	for (int i = 0; i <= 1000; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	std::cout << "Sum of even numbers from 0 to 1000 = " << sum << std::endl;

	sum = 0;
	for (auto index = 0; index <= 1000; ++index)
	{
		if (index % 2 == 0)
		{
			sum -= index;
			continue;
		}
		if ((index % 3) == 0)
		{
			sum += index;
		}
	}

	std::cout << "Sum = " << sum << std::endl;

	const int arr_size = 1000;

	int array[arr_size];

	for (int index = 0; index < arr_size; index++)
	{
		sum += index;
		if (index == 500)
		{
			break;
		}
	}
	/*
	 * бесконечнй for
	    for (;;)
	    {

	    }
	 */
	// loop	while
	int current_num = 1000;
	sum = 0;
	while (current_num > 0)
	{
		if (current_num % 2 != 0)
		{
			sum += current_num;
		}
		current_num--;
	}
	std::wcout << "Sum of odd numbers from 0 to 1000 = " << sum << std::endl;

	// loop do while
	std::wstring str(L"STALKER");
	int index = 0;
	do
	{
		std::wcout << str[index] << "." << std::ends;
		index++;
	}
	while (index < str.size());

	return 0;
}
