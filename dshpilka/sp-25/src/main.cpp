#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	const int n = 5;
	const int COL = 2;
	int i{}, j{}, min_dist_temp{}, min_dist_main{ std::numeric_limits<int>::max() };

	int arr[n][COL];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 25;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COL; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	for (i = 0; i < n; i++)
	{
		const int xcurr = arr[i][0];
		const int ycurr = arr[i][1];

		for (j = 0; j < n; j++)
		{
			const int xn = arr[j][0];
			const int yn = arr[j][1];

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

	return 0;
}