#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, i, summ;
	for (i = 1000; i < 10000; i++)
	{
		a = i % 10;
		b = (i / 10) % 10;
		c = (i / 100) % 10;
		d = i / 1000;
		summ = a + b + c + d;
		if (summ > 10)
		{
			if (summ < 16)
				cout << i << endl;
		}
	}
	return 0;
}	
