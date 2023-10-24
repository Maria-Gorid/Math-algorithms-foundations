#include <iostream>
#include <set>
#include <cmath>

int DivCount(long long n)
{
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
        return 1;
    
    return divs.size();
}

int main(int argc, char* argv[])
{
    long long n;
    std::cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        m = std::max(m, DivCount(i));
    }
    std::cout << m;
    return 0;
}