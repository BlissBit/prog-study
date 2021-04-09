#include <iostream>
int main()
{
    int n{};
    int even{};
    int odd{};
    std::cout << "Enter n " << std::endl;
    std::cin>> n;

        while (n>0)
        {
            if (n%2 == 0)
            even +=1;
            else odd +=1;
            n=n/10;
        }
        std::cout << "Even numb : " << even << std::endl;
        std::cout << "Odd numb : " << odd << std::endl;
        if (even % 2 == 0 && odd % 2 != 0)
        return (1); // Возврат значения (1)
    else
        return(0);
}
