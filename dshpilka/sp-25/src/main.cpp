#include <iostream>
#include <cmath>

/// <summary>
/// Задать в ручную один двумерный массив с координатами x и y, которые задают координаты n точек на
/// плоскости.Найти наиболее близкие друг другу точки.
/// </summary>

int main()
{
	const int n = 5;
	const int COL = 2;
	int i{}, j{};
	int temp{}, A{}, B{}, C{}, D{}, E{};
	int Distance_AB{}, Distance_BC{}, Distance_CD{}, Distance_DE{};

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

	int x1 = arr[0][0];
	int y1 = arr[0][1];

	int x2 = arr[1][0];
	int y2 = arr[1][1];

	int x3 = arr[2][0];
	int y3 = arr[2][1];

	int x4 = arr[3][0];
	int y4 = arr[3][1];

	int x5 = arr[4][0];
	int y5 = arr[4][1];

	Distance_AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	Distance_BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	Distance_CD = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
	Distance_DE = sqrt(pow((x5 - x4), 2) + pow((y5 - y4), 2));

	if (Distance_AB > Distance_BC)
	{
		temp = Distance_BC;
	}
	else
	{
		temp = Distance_AB;
	}
	
	if (temp > Distance_CD)
	{
		temp = Distance_CD;
	}
	
	if (temp > Distance_DE)
	{
		temp = Distance_DE;
	}

	std::cout << "points closest to each other = " << temp << std::endl;

	return 0;
}