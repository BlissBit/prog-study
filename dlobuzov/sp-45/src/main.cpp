#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << (a + b + c) - max(a, max(b, c)) - min(a, (b, c));
    return 0;
}