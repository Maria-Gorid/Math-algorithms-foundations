#include <iostream>
#include <set>
#include <cmath>

int main(int argc, char* argv[])
{
    long long n;
    std::cin >> n;
    std::set<long long> divs;
    for (long i = 1; i < sqrt(n) + 1; ++i)
    {
        if (n % i == 0)
        {
            divs.insert(i);
            divs.insert(n / i);
        }
    }
    if (n == 1)
        std::cout << 1;
    else
        std::cout << divs.size();
    return 0;
}
