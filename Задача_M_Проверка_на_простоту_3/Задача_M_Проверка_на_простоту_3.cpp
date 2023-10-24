#include <iostream>
#include <vector>

bool IsSimple(long long n)
{
    std::vector<bool> d(n + 1, true);
    d[0] = d[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (d[i])
            for (int j = i * i; j <= n; j += i)
                d[j] = false;
    return d[n];
}

int main(int argc, char* argv[])
{
    long long p;
    std::cin >> p;
    std::cout << (IsSimple(p) ? "YES" : "NO");
    return 0;
}
