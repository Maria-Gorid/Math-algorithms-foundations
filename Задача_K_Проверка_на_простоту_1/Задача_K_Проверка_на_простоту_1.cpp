#include <iostream>
#include <cmath>

bool IsSimple(long n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(int argc, char* argv[])
{
    int p;
    std::cin >> p;
    std:: cout << (IsSimple(p) ? "YES" : "NO");
    return 0;
}
