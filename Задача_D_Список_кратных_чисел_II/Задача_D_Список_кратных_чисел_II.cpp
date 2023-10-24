#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    int l, r, d;
    cin >> l >> r >> d;
    l--;
    vector<int> nums(r - l);
    ranges::generate_n(nums.begin(), r - l, [&]{ return ++l;});
    ranges::for_each(nums, [&](int n) { if (n % d == 0) cout << n << " "; });
    return 0;
}
