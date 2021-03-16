#include <iostream>
#include "triangle.hpp"

enum Option
{
	baseAndHeight,
	twoSidesAndTheAngleBetween,
	alongRadiusInscribedCircleAndThreeSides,
	alongRadiusCircumscribedCircleAndThreeSides
};

double convDegreeToRad(double degree)
{
	const double rad = 0.0174533;
	return 	degree * rad;
}


int main()
{
	/*
		1) Площадь треугольника по основанию и высоте
		2) Площадь треугольника по двум сторонам и углу между ними
		3) Площадь треугольника по радиусу вписанной окружности и трем сторонам
		4) Площадь треугольника по радиусу описанной окружности и трем сторонам
	*/

	std::cout << "Please select option: " << std::endl;
	std::cout << "	- base and height 1 " << std::endl;
	std::cout << "	- two sides and angle between 2 " << std::endl;
	std::cout << "	- along radius inscribed circle and three sides 3 " << std::endl;
	std::cout << "	- along radius circumscribed circle and three sides 4 " << std::endl;
	
	int choice{};
	std::cin >> choice;

	if ((choice > 4) || (choice < 1))
	{
		std::cout << "Are you stupid???" << std::endl;
		return 0;
	}

	choice--;
	switch (choice)
	{
		case Option::baseAndHeight:
		{
			std::cout << "Please enter base: " << std::endl;
			double base{};
			std::cin >> base;
			std::cout << "Please enter height: " << std::endl;
			double height{};
			std::cin >> height;
			std::cout << "Square = " << Triangle::baseAndHeight(base, height) << std::endl;
		}
		break;
		case Option::twoSidesAndTheAngleBetween:
		{
			std::cout << "Please enter first side: " << std::endl;
			double side_1{};
			std::cin >> side_1;
			std::cout << "Please enter second side: " << std::endl;
			double side_2{};
			std::cin >> side_2;
			std::cout << "Please enter angle in degree: " << std::endl;
			double alpha{};
			std::cin >> alpha;
			std::cout << "Square = " << Triangle::twoSidesAndTheAngleBetween(side_1, side_2, convDegreeToRad(alpha)) << std::endl;
		}
		break;
		case Option::alongRadiusInscribedCircleAndThreeSides:
		{
			std::cout << "Please enter first side: " << std::endl;
			double side_1{};
			std::cin >> side_1;
			std::cout << "Please enter second side: " << std::endl;
			double side_2{};
			std::cin >> side_2;
			std::cout << "Please enter trird side: " << std::endl;
			double side_3{};
			std::cin >> side_3;
			std::cout << "Please enter radius: " << std::endl;
			double radius{};
			std::cin >> radius;
			std::cout << "Square = " << Triangle::alongRadiusInscribedCircleAndThreeSides(side_1, side_2, side_3, radius) << std::endl;
		}
		break;
		case Option::alongRadiusCircumscribedCircleAndThreeSides:
		{
			std::cout << "Please enter first side: " << std::endl;
			double side_1{};
			std::cin >> side_1;
			std::cout << "Please enter second side: " << std::endl;
			double side_2{};
			std::cin >> side_2;
			std::cout << "Please enter trird side: " << std::endl;
			double side_3{};
			std::cin >> side_3;
			std::cout << "Please enter radius: " << std::endl;
			double radius{};
			std::cin >> radius;
			std::cout << "Square = " << Triangle::alongRadiusCircumscribedCircleAndThreeSides(side_1, side_2, side_3, radius) << std::endl;
		}
		break;
	}
	
	
	return 0;
}
