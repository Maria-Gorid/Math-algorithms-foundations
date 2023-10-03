#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    string inputString1;
    string inputString2;
    getline(cin, inputString1);
    getline(cin, inputString2);
    ranges::for_each(inputString1, [&](char c) { if (inputString2.find(c) == string::npos) cout << c; });
    return 0;
}
