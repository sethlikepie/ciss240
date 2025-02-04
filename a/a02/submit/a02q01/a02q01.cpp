// File: a02q01.cpp
// Name: Seth Thurman

#include <iostream>

int main()
{
    int w, h, f;
    std::cout << "Enter w: ";
    std::cin >> w;
    std::cout << "Enter h: ";
    std::cin >> h;
    std::cout << "Enter f: ";
    std::cin >> f;

    int IQ = (3 * w / h) + ((3 + f) / 42);

    std::cout << "IQ: " << IQ << std::endl;

    return 0;
}
