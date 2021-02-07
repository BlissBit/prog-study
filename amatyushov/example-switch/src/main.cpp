#include <iostream>

enum types
{
	first,
	second,
	third
};

int main()
{
	std::cout << "switch example" << std::endl;
	const types num = first;
	switch (num)
	{
		case types::first:
		{
			 std::cout << "types::first" << std::endl;
		}
		break;
		case types::second:
		{
			std::cout << "types::second" << std::endl;
		}
		break;
		case types::third:
		{
			std::cout << "" << std::endl;
		}
		break;
		default:
		{
			std::cout << "types::third" << std::endl;
		}
		break;
	}
	return 0;
}
