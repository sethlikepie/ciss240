#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(5) << "n" << std::setw(6) << "n^3\n";
    std::cout << std::setw(5) << "-" << std::setw(6) << "---\n";\
    
    for (int i = 0; i < 4;i = i + 1)
    {
        std::cout << std::setw(5) << i << std::setw(6) << i * i * i << '\n';
    }
    
    return 0;
}
