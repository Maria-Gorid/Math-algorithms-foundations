#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    long long a, b;
    unsigned long d;
    cin >> a >> b >> d;
    if (a > b)
    {
        if (a - d < b)
            cout << b;
        else
            cout << a - d;
    }
    else
    {
        if (a + d > b)
            cout << b;
        else
            cout << a + d;
    }
    
    return 0;
}
