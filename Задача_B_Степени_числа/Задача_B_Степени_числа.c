#include <stdio.h>

int main(int argc, char* argv[])
{
    long long n, res;
    scanf_s("%lli", &n);
    res = 1;
    if (n != 1)
        while (res < 1000000000)
        {
            printf("%lli ", res);
            res *= n;
        }
    return 0;
}
