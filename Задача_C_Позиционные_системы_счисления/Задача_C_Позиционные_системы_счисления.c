#include <stdio.h>

long toDec(int number, int base)
{
    long res = 0;
    int pow = 1;
    while (number > 0)
    {
        res += pow * (number % 10);
        pow *= base;
        number /= 10;
    }
    return res;
}

long fromDec(int number, int base)
{
    long res = 0;
    while(number > 0)
    {
        res = (res * 10) + (number % base);
        number /= base;
    }
    return res;
}

int sumDigit(int num)
{
    int sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(int argc, char* argv[])
{
    int num;
    scanf_s("%d", &num);
    printf("%li", fromDec(sumDigit(fromDec(toDec(num, 5), 7)), 3));
    return 0;
}
