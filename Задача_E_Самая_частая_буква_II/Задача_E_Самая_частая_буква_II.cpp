#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string inputString;
    int letterCount[26] = { 0 };
    getline(cin, inputString);
    ranges::for_each(inputString, [&](char x) { letterCount[(int)(x - 'a')]++; });
    const auto max = ranges::max_element(std::begin(letterCount), std::end(letterCount));
    const int max_pos = ranges::distance(std::begin(letterCount), max);
    printf("%c", static_cast<char>(max_pos + 'a'));
    return 0;
}
