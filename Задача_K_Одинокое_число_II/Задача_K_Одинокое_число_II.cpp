#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

int main(int argc, char* argv[])
{
    int size;
    cin >> size;
    cin.ignore(1, '\n');
    cin.clear();
    vector<int> nums;
    istream_iterator<int> cin_it(cin);
    istream_iterator<int> eos;
    for_each(cin_it, eos, [&](int x) { nums.push_back(x); });
    cout << accumulate(nums.begin(), nums.end(), 0, [](int a, int b){ return a ^ b;});
    return 0;
}
