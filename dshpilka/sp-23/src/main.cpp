#include <iostream>

int main()
{
	int size{}, sum{};

	std::cout << "Enter the number of elements from 25 to 100 = ";
	std::cin >> size;
	std::cout << std::endl;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 25;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cout << std::endl;

	for (int m = 0; m < size; m++)
	{
		std::cout << arr[m] << std::endl;

		for (int i = m + 1; i < size; i++)
		{
			if (arr[m] == arr[i])
			{
				for (int k = i; k < size - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				size--;
			}
		}
		sum += arr[m];
	}

	std::cout << "Sum = " << sum << std::endl;
	std::cout << "Average = " << double (sum) / double (size) << std::endl;

	delete[] arr;

	return 0;
}