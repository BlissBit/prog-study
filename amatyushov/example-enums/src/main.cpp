#include <iostream>

enum ActionType {
	Addition,
	Multiplication,
	Subtraction,
	Division
};

int main()
{
	int A, B, action= 0;
	std::cout << "Enter A: ";
	std::cin >> A;
	std::cout << "Enter B: ";
	std::cin >> B;

	std::cout << "Enter action (1-Addition, 2-Multiplication, 3-Subtraction, 4-Division):";
	std::cin >> action;

	switch (action)
	{
		case ActionType::Addition:
		{
			std::cout << "Result: " << A + B << std::endl;
		}
		break;
		case ActionType::Multiplication:
		{
			std::cout << "Result: " << A * B << std::endl;
		}
		break;
		case ActionType::Subtraction:
		{
			std::cout << "Result: " << A - B << std::endl;
		}
		break;
		case ActionType::Division:
		{
			std::cout << "Result: " << A / B << std::endl;
		}
		break;
	}

	return 0;
}
