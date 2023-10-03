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
    auto max = ranges::max_element(std::begin(letterCount), std::end(letterCount));
    int max_pos = ranges::distance(std::begin(letterCount), max);
    printf("%c", (char)(max_pos + 'a'));
    return 0;
}
