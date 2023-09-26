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

int fromDec(int number, int base)
{
	if (number <= 0)
		return 0;
	else
		return (number % base + 10 * fromDec(number / base, base));
}

int sumDigit(int num)
{
	int sum = 0;
	while (num > 0)
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
	printf("%d", fromDec(sumDigit(fromDec(toDec(num, 5), 7)), 3));
	return 0;
}
