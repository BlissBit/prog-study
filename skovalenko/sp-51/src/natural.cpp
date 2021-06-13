#include <iostream>
using namespace std;

int main()
{
	int a{}, c{}, b{}, d{};
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
