#include <iostream>

int main()
{
	int size{};

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



	delete[] arr;

	return 0;
}