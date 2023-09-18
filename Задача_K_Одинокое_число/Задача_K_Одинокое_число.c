#include <stdio.h>

int main(int argc, char* argv[])
{
    int size, x;
    int sum = 0;
    scanf_s("%d", &size);
    for (int i = 0; i < size; ++i)
    {
        scanf_s("%d", &x);
        sum ^= x;
    }
    printf("%d", sum);
    return 0;
}
