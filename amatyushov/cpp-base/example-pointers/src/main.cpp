#include <iostream>

void add5(int& n)
{
	n += 5;
}

void exampleArrays()
{
	int num = 10;
	add5(num);


	int* ptr_num = new int[200]{};

	for (auto i = 0; i < 200; i++)
	{
		ptr_num[i] = i + 9;
	}

	for (auto i = 0; i < 200; i++)
	{
		std::cout << " " << ptr_num[i] << " ";
	}

	int arr[10]{ 1, 2 , 3, 4, 5 , 6, 7, 8, 9, 10 };

	std::cout << *(arr + 2) << std::endl;

	for (auto i = 0; i < 10; i++)
	{
		std::cout << *(arr + i) << " ";
	}

	delete ptr_num;
}


void min(int *const h)
{
	*h += 10;
}

int main()
{
	int g = 10;
	int * ptr = &g;
	
	min(ptr);
	
	return 0;
}
