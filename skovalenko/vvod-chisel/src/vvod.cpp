#include <iostream>
int main()
{
	int a;
	std::cout << "Polzovatel vvodit chislo:  ";
	std::cin >> a;
	if (a % 5 == 0)
	{
		std::cout << "THIS IS DELITSYA NA 5";
	}
	else
	{
		std::cout << a;
	}
	return 0;
}
//���� ������� ������ �����! ��� �������: ������������ ������ �����, ���� �������� ����� ������� ��� ������� �� 5
//�� �������� �� ���� ������������, ����� ������ ��� �������