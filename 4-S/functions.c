#include "functions.h"

int sumDivisors(int num)
{
	int i, sum = 0;
	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;
	}

	return sum;
}

int isPerfect(int num)
{
	return num == sumDivisors(num);
}

int numDigits(int num)
{
	int n = 0;
	do
	{
		n++;
		num /= 10;
	} while (num != 0);
	return n;
}

int power(int x, int y)
{
	int result = 1, i;
	for (i = 0; i < y; i++)
		result *= x;
	return result;
}

int contains(int x, int y)
{
	int p = power(10, numDigits(y));
	do
	{
		if (x % p == y)
			return 1;
		x /= 10;
	} while (x != 0);
	return 0;
}