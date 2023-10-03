#include <stdio.h>

int main(int argc, char* argv[])
{
    int l, r, d;
    scanf_s("%d %d %d", &l, &r, &d);
    for (int i = l; i <= r; ++i)
    {
        if (i % d == 0)
            printf("%d ", i);
    }
    return 0;
}
