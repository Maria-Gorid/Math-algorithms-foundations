#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int m = 0, count = 0, x;
    std::vector<int> nums;
    std::vector<int> d(n + 1, 2147483647);
    for (int i = 1; i <= n; i++)
    {
        std::cin >> x;
        nums.push_back(x);
    }
    d[0] = -2147483647;
    for (int i = 0; i < n; i++)
    {
        int pos = (int)(std::upper_bound(d.begin(), d.end(), nums[i],
            [](double value, int n) { return value <= n;}) - d.begin());
        if (d[pos - 1] <= nums[i] && nums[i] <= d[pos])
        {
            d[pos] = nums[i];
            m = std::max(m, pos);
        }

    }
    std::cout << m;
    return 0;
}