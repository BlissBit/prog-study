#include <iostream>
#include <random>
#include <algorithm>
#include "../headers/Vectors.hpp"

namespace myVector
{

void delElemVector(std::vector<int>& v, std::uint16_t delElem)
{
	if (delElem < v.size())
	{
		v[delElem] = std::move(v.back());
	}
	v.pop_back();
}

void showVector()
{
	auto coutVector = [](std::vector<int> v)
		{
			for (auto it = v.begin(); it != v.end(); ++it)
			{
				std::cout << *it << " ";
			}
			std::cout << "\n";
		};

	std::random_device rd;
	std::minstd_rand m_rand(rd());

	std::vector<int> vect;
	for (auto count = 0; count < 10; ++count)
	{
		vect.push_back(m_rand());
	}

	coutVector(vect);
	std::sort(vect.begin(), vect.end());
	coutVector(vect);

	delElemVector(vect, 3);
	coutVector(vect);

}

/// <summary>
/// пример работы с вектором и механизмом std::pair на примере вектора
/// когда в каждом элементе вектора хранятся координаты точки
/// </summary>
void vectorPair()
{
	int n{};
	std::vector<std::pair<int, int>> points{};
	std::cout << "Enter n: ";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		points.emplace_back(std::make_pair(rand() % 25, rand() % 25));
		std::cout << "x = " << points[i].first << " y = " << points[i].second << std::endl;
	}

	int min_dins_main = std::numeric_limits<int>::max();
	for (const auto& point1 : points)
	{
		for (const auto& point2 : points)
		{
			if (point2 != point1)
			{
				const int min_dins_temp = sqrt(pow((point2.first - point1.first), 2) + pow((point2.second - point1.second), 2));
				if (min_dins_temp < min_dins_main)
				{
					std::cout << "min_dins_main = " << min_dins_main << " min_dins_temp = " << min_dins_temp << std::endl;
					min_dins_main = min_dins_temp;
				}
			}
		}
	}
	
	std::cout << "min dist = " << min_dins_main <<	std::endl;
}
	
}
