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
    
    int tmp = nums[0];
    
    sort(nums.begin(), nums.end());
    cout << ranges::find(nums, tmp) - nums.begin() + 1;
    return 0;
}
