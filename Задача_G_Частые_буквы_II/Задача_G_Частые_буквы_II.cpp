#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    int count;
    string inputString;
    int letterCount[26] = { 0 };
    getline(cin, inputString);
    cin >> count;
    ranges::for_each(inputString, [&](char x) { letterCount[(int)(x - 'a')]++; });
    int i = 0;
    ranges::for_each(letterCount, [&](int value) { if (letterCount[i] >= count) cout << static_cast<char>(i + 'a') << ' '; i++;});
    return 0;
}