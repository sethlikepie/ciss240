// File: a02q03.cpp
// Name: Seth Thurman

#include <iostream>

int main()
{
    int x, y, z, i, t;
    std::cout << "Enter x, y, z, i, t in that order: ";
    std::cin >> x >> y >> z >> i >> t;

    int result = x + y / (z + i) * t * t * t;

    std::cout << result << std::endl;

    return 0;
}
