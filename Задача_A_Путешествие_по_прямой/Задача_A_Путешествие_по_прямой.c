#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, d;
    scanf_s("%d %d %d", &a, &b, &d);
    if ((a + d) >= b)
        printf("%d", b);
    else
        printf("%d", a + d);
    return 0;
}
