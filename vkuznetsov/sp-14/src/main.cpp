#include <iostream>
#include <cmath>

int main()
{
	int x1 = -5;
	int y1 = 4;
	int x2 = 3;
	int y2 = -2;
	int AB = 0;

	AB = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	std::cout << "A (x1, y1) = " << x1 << " " << y1 << std::endl;
	std::cout << "B (x2, y2) = " << x2 << " " << y2 << std::endl;
	std::cout << "AB=" << AB << std::endl;
	return 0;
}