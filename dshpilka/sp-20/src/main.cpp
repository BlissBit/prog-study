#include <iostream>

void degrees()
{
	double Celsius{}, Fahrenheit{};
	int degrees{}, selection_2{};

	std::cout << "1. degrees Celsius in degrees Fahrenheit" << std::endl <<
		"2. degrees Fahrenheit in degrees Celsius" << std::endl;

	std::cin >> selection_2;

	switch (selection_2)
	{
	case 1:
		std::cout << "degrees Celsius = ";
		std::cin >> Celsius;
		Fahrenheit = Celsius * 1.8 + 32;
		std::cout << "degrees Fahrenheit = " << Fahrenheit << std::endl;
		break;

	case 2:
		std::cout << "degrees Fahrenheit = ";
		std::cin >> Fahrenheit;
		Celsius = (Fahrenheit - 32) / 1.8;
		std::cout << "degrees Celsius = " << Celsius << std::endl;
		break;
	}
}

void length()
{
	int length{}, selection_3{};
	double miles{}, kilometers{};

	std::cout << "1. miles in kilometers" << std::endl <<
		"2. kilometers in miles" << std::endl;

	std::cin >> selection_3;

	switch (selection_3)
	{
	case 1:
		std::cout << "miles = ";
		std::cin >> miles;
		kilometers = miles * 1.609;
		std::cout << "kilometers = " << kilometers;
		break;

	case 2:
		std::cout << "kilometers = ";
		std::cin >> kilometers;
		miles = kilometers * 0.6214;
		std::cout << "miles = " << miles;
		break;
	}
}

void weight()
{
	int weight{}, selection_4{};
	double pounds{}, kilograms{};

	std::cout << "1. pounds in kilograms" << std::endl <<
		"2. kilograms in pounds" << std::endl;

	std::cin >> selection_4;

	switch (selection_4)
	{
	case 1:
		std::cout << "pounds = ";
		std::cin >> pounds;
		kilograms = pounds / 2.2046;
		std::cout << "kilograms = " << kilograms;
		break;

	case 2:
		std::cout << "kilograms = ";
		std::cin >> kilograms;
		pounds = kilograms * 2.2046;
		std::cout << "pounds = " << pounds;
		break;
	}
}

void currency()
{
	int currency{}, selection_5{};
	double US_Dollars{}, Russian_Ruble{};
	const double Dollars = 71.80;

	std::cout << "1. US Dollars in Russian Ruble" << std::endl <<
		"2. Russian Ruble in US Dollars" << std::endl;

	std::cin >> selection_5;

	switch (selection_5)
	{
	case 1:
		std::cout << "US Dollars = ";
		std::cin >> US_Dollars;
		Russian_Ruble = US_Dollars * Dollars;
		std::cout << "Russian Ruble = " << Russian_Ruble;
		break;

	case 2:
		std::cout << "Russian Ruble = ";
		std::cin >> Russian_Ruble;
		US_Dollars = Russian_Ruble / Dollars;
		std::cout << "US Dollars = " << US_Dollars;
		break;
	}
}

int main()
{
	int n{}, selection{};
	bool is_inf_input = true;

	std::cout << "Enter n = " << std::endl;

	while (!(std::cin >> n).good())
	{
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		std::cout << "Input error, try again\n";
		is_inf_input = false;
		break;
	}
	
	std::cout << "Select a measurement system:" << std::endl <<
		"1. degrees Celsius or Fahrenheit" << std::endl <<
		"2. miles or kilometers" << std::endl <<
		"3. pounds or kilograms" << std::endl <<
		"4. US Dollars or Russian Ruble" << std::endl;

	std::cin >> selection;

	switch (selection)
	{
	case 1:
		degrees();
		break;

	case 2:
		length();
		break;

	case 3:
		weight();
		break;

	case 4:
		currency();
		break;
	
	default:
		std::cout << "Incorrect choice!" << std::endl;
		break;
	}

	return 0;
}