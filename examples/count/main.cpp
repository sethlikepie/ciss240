#include <iostream>

int main()
{
    int x = 4, y = 2;

    std::cout << x << ", " << y
              << std::endl;

    int t = x;
    x = y;
    y = t;
    std::cout << x << ", " << y << std::endl; 
}
