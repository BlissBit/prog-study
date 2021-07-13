#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

int main()
{
	int COL{}, n{}, i{}, j{}, min_dist_temp{}, min_dist_main{ std::numeric_limits<int>::max() };

	std::cout << "Enter n = " << std::endl;
	std::cin >> n;

	std::cout << "Enter COL = " << std::endl;
	std::cin >> COL;

	int** ptrarr = new int* [n];
	for ( i = 0; i < n; i++)
	{
		ptrarr[i] = new int[COL];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COL; j++)
		{
			ptrarr[i][j] = rand() % 25;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COL; j++)
		{
			std::cout << std::setw(3) << ptrarr[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	for (i = 0; i < n; i++)
	{
		const int xcurr = ptrarr[i][0];
		const int ycurr = ptrarr[i][1];

		for (j = 0; j < n; j++)
		{
			const int xn = ptrarr[j][0];
			const int yn = ptrarr[j][1];

			if (i != j)
			{
				const int min_dist_temp = sqrt(pow((xn - xcurr), 2) + pow((yn - ycurr), 2));

				std::cout << "min_dist_temp " << min_dist_temp << std::endl;

				if (min_dist_temp < min_dist_main)
				{
					min_dist_main = min_dist_temp;
				}
			}
		}
	}
	std::cout << std::endl;
	std::cout << "min_dist_main " << min_dist_main << std::endl;
	
	for (i = 0; i < n; i++)
	{
		delete ptrarr[i];
	}

	delete[] ptrarr;

	return 0;
}