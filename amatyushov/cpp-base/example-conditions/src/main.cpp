#include <iostream>
#include <string>

int main()
{
	bool a = false;
	bool b = true;
	bool c = false;
	bool d = true;

	bool f = !a;     // true
	bool g = a && b; // false
	bool h = a || b; // true

	h = 5 > 2;  // true
	h = 5 < 2;  // false
	h = 5 != 2; // true
	h = 5 <= 6; // true
	h = 5 >= 6; // false

	/*
	   если (истина\ложь)
	   {
	    тело условия
	   }
	   иначе
	   {
	    тело условия
	   }
	 */

	int x = 0;
	std::cout << "Enter x: ";
	std::cin >> x;

	if (x > 50)
	{
		std::cout << "x is greater than 50 \n";
	}
	else if (x < 30)
	{
		std::cout << "x is less than 30 \n";
	}
	else
	{
		std::cout << "you entered unless number \n";
	}

	std::string str;
	std::cout << "Enter string: ";
	std::cin >> str;

	if (str.empty())
	{
		std::cout << "You entering empty string" << std::endl;
	}
	else
	{
		std::cout << "You entering: " << str << std::endl;
	}

	std::cout << "End of Program" << "\n";

	std::cout << "Size of X" << sizeof(x);

	// ДЗ
	int v = 5;
	int k = 9;
	int z = (v, k);
	// x = (условие) ? значение1 : значение2;
	const int u = (v > k) ? 4 : 8;
	return 0;
}
