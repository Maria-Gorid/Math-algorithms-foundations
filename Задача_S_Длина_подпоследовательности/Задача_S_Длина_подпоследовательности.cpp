#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;
	int m = 0, count = 0, x;
	std::vector<int> nums;
	std::vector<int> d(n, -4294967296);
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		nums.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		int pos = std::lower_bound(d.begin(), d.end(), nums[i]) - d.begin();
		if (d[pos - 1] > nums[i] && nums[i] > d[pos])
			d[pos] = nums[i];
	}
	std::cout << d[n - 1];
	return 0;
}
