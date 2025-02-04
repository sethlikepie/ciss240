// File: a03q03.cpp
// Name: Seth Thurman

#include <iostream>

int main()
{
    int plaintext = 0;
    std::cin >> plaintext;

    int a = (plaintext / 10000) % 10;
    int b = (plaintext / 1000) % 10;
    int c = (plaintext / 100) % 10;
    int d = (plaintext / 10) % 10;
    int e = plaintext % 10;

    int e1 = (e + 1) % 10;
    int c1 = d;
    int d1 = c;
    int b1 = a;
    int a1 = b;

    int ciphertext = a1 * 10000 + b1 * 1000 + c1 * 100 + d1 * 10 + e1;

    std::cout << plaintext << " " << ciphertext << std::endl;

    return 0;
}
