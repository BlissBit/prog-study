#include <iostream>
using namespace std;

/// Среди натуральных чисел, которые были введены, найти наибольшее по сумме цифр. Вывести на экран это число и сумму его цифр.

int main()
{
	int a;
	int b = 0;
	int c;
	int d = 0;
	cout << "Vvedite naturalnoe chislo A: " << endl;
	cin >> a;
	while (a != 0)
	{
		b += a % 10;
		a /= 10;
	}
	cout << "Summa naturalnogo chisla A: " << b << endl;
	cout << "Vvedite naturalnoe chislo B: " << endl;
	cin >> c;
	while (c != 0)
	{
		d += c % 10;
		c /= 10;
	}
	cout << "Summa naturalnogo chisla B: " << d << endl;
	if (b > d)
	{
		cout << "Chislo A > B" << endl;
		cout << "A: " << b;
	}
	if (b < d) 
	{
		cout << "Chislo A < B" << endl;
		cout << "B: " << d;
	}
	if (b == d) 
	{
		cout << "A = B" << endl;
	}
	return 0;
}
