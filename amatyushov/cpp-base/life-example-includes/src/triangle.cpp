#include "triangle.hpp"
#include <cmath>
namespace Triangle
{

double baseAndHeight(double base, double height)
{
	return (base * height)/2;
}

double twoSidesAndTheAngleBetween(double side_1, double side_2, double alpha)
{
	double a = std::sin(alpha);
	return (side_1*side_2*a) * 0.5;
}


double alongRadiusInscribedCircleAndThreeSides(double side_1, double side_2, double side_3, double radius)
{
	return radius*((side_1 + side_2 + side_3)/2);
}

double alongRadiusCircumscribedCircleAndThreeSides(double side_1, double side_2, double side_3, double radius)
{
	return (side_1 * side_2 * side_3)/(4*radius);
}

}