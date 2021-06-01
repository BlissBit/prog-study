#include <iostream>
#include <cmath>

struct point
{
	int x;
	int y;
};

struct line
{
	point points[2];
	
	double distance_points()
	{
		return std::sqrt(pow((points[0].x - points[1].x), 2) +
			pow((points[0].y - points[1].y), 2));
	}
};

struct cube
{
	
};


int main()
{
	line m_line { {{10,20},{30,65}} };
	int distance = m_line.distance_points();
	return 0;
}
