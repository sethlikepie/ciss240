#include <iostream>
#include <cmath>

int main()
{
    int enemy_x = -5;
    bool in_range = false;
    int gun_0 = -3, gun_1 = 3, range = 2;

    std::cin >> enemy_x;
    in_range = (std::abs(enemy_x - gun_0) <= range) || (std::abs(enemy_x - gun_1) <= range);
    std::cout << in_range << '\n';

    return 0;
}
