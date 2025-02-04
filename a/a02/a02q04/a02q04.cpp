// File: a02q04.cpp
// Name: Seth Thurman

#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << (number / 10000) % 10 << " "
              << (number / 1000) % 10 << " "
              << (number / 100) % 10 << " "
              << (number / 10) % 10 << " "
              << number % 10 << std::endl;

    return 0;
}
