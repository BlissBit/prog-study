#include <iostream>

enum class types
{
	first,
	second,
	third
};

enum class Fruit
{
	Banana,
	Apple,
	Orange,
	Peach
};


int main()
{
	std::cout << "switch example" << std::endl;
	Fruit fruit = Fruit::Orange;
	switch (fruit)
	{
		case Fruit::Apple:
		{
			 std::cout << "Apple" << std::endl;
		}
		break;
		case Fruit::Banana:
		{
			std::cout << "Banana" << std::endl;
		}
		break;
		case Fruit::Orange:
		{
			std::cout << "Orange" << std::endl;
		}
		break;
		case Fruit::Peach:
		{
			std::cout << "Peach" << std::endl;
		}
		break;
		default:
		{
			std::cout << "Unknown fruit" << std::endl;
		}
		break;
	}
	
	return 0;
}
