#include <iostream>
#include "Math.hpp"

namespace my_math
{

std::uint32_t fib_num(std::uint32_t n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return fib_num(n - 1) + fib_num(n - 2);
}

int abs(int obj)
{
	// возвращает абсолютное значение iobj
	return obj < 0 ? -obj : obj;
}

int min(int p1, int p2)
{
	// возвращает меньшую из двух величин
	return p1 < p2 ? p1 : p2;
}

int gcd(int vl, int v2)
{
	// возвращает наибольший общий делитель
	while (v2)
	{
		int temp = v2;
		v2 = vl % v2;
		vl = temp;
	}
	return vl;
}

}
