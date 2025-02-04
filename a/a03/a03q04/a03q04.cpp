// File: a03q04.cpp
// Name: Seth Thurman

#include <iostream>
#include <iomanip>

int main()
{
    int time1, time2;
    std::cin >> time1 >> time2;

    int h1 = (time1 / 10000) % 100;
    int m1 = (time1 / 100) % 100;
    int s1 = time1 % 100;

    int h2 = (time2 / 10000) % 100;
    int m2 = (time2 / 100) % 100;
    int s2 = time2 % 100;

    int total_seconds1 = h1 * 3600 + m1 * 60 + s1;
    int total_seconds2 = h2 * 3600 + m2 * 60 + s2;

    int diff_seconds = std::abs(total_seconds1 - total_seconds2);
    int diff_h = diff_seconds / 3600;
    int diff_m = (diff_seconds % 3600) / 60;
    int diff_s = diff_seconds % 60;

    std::cout << std::setw(2) << std::setfill('0') << diff_h << ":"
              << std::setw(2) << std::setfill('0') << diff_m << ":"
              << std::setw(2) << std::setfill('0') << diff_s << std::endl;

    return 0;
}
