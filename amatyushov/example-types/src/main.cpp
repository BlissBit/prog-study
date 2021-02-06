#include <iostream>
#include <string>
#include <limits>
int main()
{
	std::cout << "********************** Integer type **********************" << std::endl;
	std::cout << "short: " << sizeof(short) << " bytes,"
		<< " min: " << std::numeric_limits<short>::min() << " max: "
		<< std::numeric_limits<short>::max() << std::endl;

	std::cout << "int: " << sizeof(int) << " bytes,"
		<< " min: " << std::numeric_limits<int>::min() << " max: "
		<< std::numeric_limits<int>::max() << std::endl;

	std::cout << "long: " << sizeof(long) << " bytes,"
		<< " min: " << std::numeric_limits<long>::min()
		<< " max: " << std::numeric_limits<long>::max() << std::endl;

	std::cout << "long long: " << sizeof(long long) << " bytes,"
		<< " min: " << std::numeric_limits<long long>::min()
		<< " max: " << std::numeric_limits<long long>::max() << std::endl;

	std::cout << "unsigned short: " << sizeof(unsigned short) << " bytes,"
		<< " min: " << std::numeric_limits<unsigned short>::min()
		<< " max: " << std::numeric_limits<unsigned short>::max() << std::endl;

	std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes,"
		<< " min: " << std::numeric_limits<unsigned int>::min()
		<< " max: " << std::numeric_limits<unsigned int>::max() << std::endl;


	std::cout << "unsigned long: " << sizeof(unsigned long) << " bytes,"
		<< " min: " << std::numeric_limits<unsigned long>::min()
		<< " max: " << std::numeric_limits<unsigned long>::max() << std::endl;

	std::cout << "unsigned long long: " << sizeof(unsigned long long) << " bytes,"
		<< " min: " << std::numeric_limits<unsigned long long>::min()
		<< " max: " << std::numeric_limits<unsigned long long>::max() << std::endl;

	std::cout << "********************** Boolean type **********************" << std::endl;
	std::cout << "bool: " << sizeof(bool) << " bytes,"
		<< " min: " << std::numeric_limits<bool>::min()
		<< " max: " << std::numeric_limits<bool>::max() << std::endl;

	std::cout << "********************** Real numbers **********************" << std::endl;
	std::cout << "float: " << sizeof(float) << " bytes,"
		<< " min: " << std::numeric_limits<float>::min()
		<< " max: " << std::numeric_limits<float>::max() << std::endl;

	std::cout << "double: " << sizeof(double) << " bytes,"
		<< " min: " << std::numeric_limits<double>::min()
		<< " max: " << std::numeric_limits<double>::max() << std::endl;

	std::cout << "long double: " << sizeof(long double) << " bytes,"
		<< " min: " << std::numeric_limits<long double>::min()
		<< " max: " << std::numeric_limits<long double>::max() << std::endl;

	std::wcout << "********************** Symbols (Integer) types **********************" << std::endl;




	std::cout << "char: " << sizeof(char) << " bytes,"
		<< " min: " << static_cast<int>(std::numeric_limits<char>::min())
		<< " max: " << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;

	std::cout << "wchar_t: " << sizeof(wchar_t) << " bytes,"
		<< " min: " << std::numeric_limits<wchar_t>::min()
		<< " max: " << std::numeric_limits<wchar_t>::max() << std::endl;

	/*std::cout << "********* ASCI *********" << std::endl;

	char m_example_char = 'a';
	std::cout << "Number Symbol \'a\' - " << static_cast<int>(m_example_char) << std::endl;
	std::cout << std::endl;

	for (int i = std::numeric_limits<char>::min(); i < std::numeric_limits<char>::max(); i++)
	{
		m_example_char = i;
		if (i % 32 == 0)
			std::cout << m_example_char << " " << std::endl;
		else
			std::cout << m_example_char << " " << std::ends;
	}
	std::cout << std::endl;

	/*_setmode(_fileno(stdout), _O_U16TEXT);


	wchar_t m_example_wchar = 'a';
	std::wcout << "Number Symbol \'a\' - " << static_cast<int>(m_example_wchar) << std::endl;
	std::wcout << std::endl;

	for (int i = std::numeric_limits<wchar_t>::min(); i < std::numeric_limits<wchar_t>::max(); i++)
	{
		m_example_wchar = i;
		if (i % 32 == 0)
			std::wcout << m_example_wchar << " " << std::endl;
		else
			std::wcout << m_example_wchar << " " << std::ends;
	}
	std::cout << std::endl;*/

	std::cout << "********************** Integer STL Data Types **********************" << std::endl;

	std::cout << "int8_t: " << sizeof(int8_t) << " bytes,"
		<< " min: " << std::to_string(std::numeric_limits<int8_t>::min())
		<< " max: " << std::to_string(std::numeric_limits<int8_t>::max()) << std::endl;

	std::cout << "int16_t: " << sizeof(int16_t) << " bytes,"
		<< " min: " << std::numeric_limits<int16_t>::min()
		<< " max: " << std::numeric_limits<int16_t>::max() << std::endl;

	std::cout << "int32_t: " << sizeof(int32_t) << " bytes,"
		<< " min: " << std::numeric_limits<int32_t>::min()
		<< " max: " << std::numeric_limits<int32_t>::max() << std::endl;

	std::cout << "int64_t: " << sizeof(int64_t) << " bytes,"
		<< " min: " << std::numeric_limits<int64_t>::min()
		<< " max: " << std::numeric_limits<int64_t>::max() << std::endl;

	std::cout << "uint8_t: " << sizeof(uint8_t) << " bytes,"
		<< " min: " << std::to_string(std::numeric_limits<uint8_t>::min())
		<< " max: " << std::to_string(std::numeric_limits<uint8_t>::max()) << std::endl;

	std::cout << "uint16_t: " << sizeof(uint16_t) << " bytes,"
		<< " min: " << std::numeric_limits<uint16_t>::min()
		<< " max: " << std::numeric_limits<uint16_t>::max() << std::endl;

	std::cout << "uint32_t: " << sizeof(uint32_t) << " bytes,"
		<< " min: " << std::numeric_limits<uint32_t>::min()
		<< " max: " << std::numeric_limits<uint32_t>::max() << std::endl;

	std::cout << "uint64_t: " << sizeof(uint64_t) << " bytes,"
		<< " min: " << std::numeric_limits<uint64_t>::min()
		<< " max: " << std::numeric_limits<uint64_t>::max() << std::endl;

	std::cout << "void: " << sizeof(void*) << " bytes,"
		<< " min: " << std::numeric_limits<void*>::min()
		<< " max: " << std::numeric_limits<void*>::max() << std::endl;

	return 0;
}
