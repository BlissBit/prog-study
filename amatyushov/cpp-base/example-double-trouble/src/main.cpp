#include <iostream>



int main()
{
	double x = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	
	double a = 0.1;
	double b = 0.2;
	double c = 0.3;
	if ((a + b) == c)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	
	double s = a + b;
	double z = s - a;
	double t = b - z; // t == 0 ???

	return 0;
}
