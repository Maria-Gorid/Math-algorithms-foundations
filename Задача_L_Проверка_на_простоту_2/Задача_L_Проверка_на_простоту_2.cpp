#include <iostream>
#include <cmath>

bool IsSimple(long n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(int argc, char* argv[])
{
    long p;
    std::cin >> p;
    std:: cout << (IsSimple(p) ? "YES" : "NO");
    return 0;
}