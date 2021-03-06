#include <iostream>
#include <random>
#include "../headers/Vectors.hpp"

namespace myVector
{

namespace
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

}

}
