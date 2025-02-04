#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(5) << "n" << std::setw(6) << "n^3\n";
    std::cout << std::setw(5) << "-" << std::setw(6) << "---\n";
    std::cout << std::setw(5) << 0 << std::setw(6) << "0\n";
    std::cout << std::setw(5) << 1 << std::setw(6) << "1\n";
    std::cout << std::setw(5) << 2 << std::setw(6) << "8\n";
    std::cout << std::setw(5) << 3 << std::setw(6) << "27\n";
    return 0;
}
