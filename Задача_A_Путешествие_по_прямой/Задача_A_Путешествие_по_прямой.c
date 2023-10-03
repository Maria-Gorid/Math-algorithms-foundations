#include <stdio.h>

int main(int argc, char* argv[])
{
	long long a, b, d;
	scanf_s("%lli %lli %lli", &a, &b, &d);
	if ((a + d) >= b)
		printf("%lli", b);
	else
		printf("%lli", a + d);
	return 0;
}

