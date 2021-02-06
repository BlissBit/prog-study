#include <iostream>
#ifdef WIN32
#include <io.h>
#include <fcntl.h>
#else
#include <clocale>
#endif

int main()
{
#ifdef WIN32
    _setmode(_fileno(stdout), _O_U16TEXT);
#else	
	setlocale(LC_CTYPE, "");
#endif
	// loop for
	int sum = 0;
    for (int i = 0; i <= 1000; i++)
    {
    	if (i % 2 == 0)
    	{
    		sum += i;
    	}
    }
    std::wcout << L"Сумма чётных чисел от 0 до 1000 = " << sum << std::endl;

	// loop	while
	int current_num = 1000;
	sum = 0;
	while(current_num > 0)
	{
		if (current_num % 2 != 0)
		{
			sum += current_num;
		}
		current_num--;
	}
	std::wcout << L"Сумма нечётных чисел от 0 до 1000 = " << sum << std::endl;

	//loop do while
	std::wstring str(L"STALKER");
	int index = 0;
    do
    {
	    std::wcout << str[index] << "." << std::ends;
    	index++;
    }
    while (index < str.size());
	
	return 0;
}
