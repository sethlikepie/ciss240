// File: a03q01.cpp
// Name: Seth Thurman

#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int remainder_original = number % 9;
    int sum_digits = (number / 1000) % 10 + (number / 100) % 10 + (number / 10) % 10 + number % 10;
    int remainder_sum = sum_digits % 9;

    std::cout << remainder_original << " " << sum_digits << " " << remainder_sum << std::endl;

    return 0;
}
