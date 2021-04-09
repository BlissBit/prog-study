#include<iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int n{};
    std::srand (static_cast<unsigned int>(time(0)));
    std::cout<<"Guess The Number :) " << std::endl;
    n = (std::rand() % 100) + 1;
    int answer{};
    do
    {
        std::cout << "Enter envisioned number " << std::endl;
        std::cin >> answer;
            if (n > answer) 
            {
                std::cout << "The number is bigger than you enter " << std::endl;
            }
            else if (n < answer) 
            {
                std::cout << "The number is smaller than you enter " << std::endl;
            }
    }
    while (n != answer);
    std::cout << "You guessed ! " << std::endl;
  return 0;
}
