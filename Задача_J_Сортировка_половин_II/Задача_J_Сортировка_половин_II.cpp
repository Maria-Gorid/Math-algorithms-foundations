#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

int main(int argc, char* argv[])
{
    int size;
    vector<int> nums;
    cin >> size;
    cin.ignore(1, '\n');
    cin.clear();
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(nums));

    sort(nums.begin(), nums.begin() + size / 2);
    sort(nums.begin() + size / 2, nums.begin() + size, greater{});
    ranges::for_each(nums, [&](int x) { cout << x << ' '; });
    return 0;
}