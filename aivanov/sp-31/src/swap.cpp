#include<iostream>
int main ()
{
    int a = 0;
    int b = 0;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "swap with buffer" << std::endl;
    int buffer = 0;
    buffer = a;
    a = b;
    b = buffer;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "swap with summ" << std::endl;
    /**
     * a=5
     * b=7
     * a=a+b 12  
     * b=a-b 5
     * a=a-b 7
     */
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    return 0;
}