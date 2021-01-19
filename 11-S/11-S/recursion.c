#include "recursion.h"
#include <stdio.h>

// n = 5
// *****
// ****
// ***
// **
// *
void printTriangle(int n)
{
	if (n == 0)
		return;
	printLine(n);
	printTriangle(n - 1);
}

void printLine(int n)
{
	if (n == 0)
	{
		printf("\n");
		return;
	}
	printf("*");
	printLine(n - 1);
}

// n = 5
// *
// **
// ***
// ****
// *****
void printTriangle2(int n)
{
	if (n == 0)
		return;
	printTriangle2(n - 1);
	printLine(n);
}

int isPrimeHelper(int n, int helper)
{
	if (helper == 1)
		return 1;
	if (n % helper != 0)
		return isPrimeHelper(n, helper - 1);
	return 0;
}

int isPrime(int n)
{
	return isPrimeHelper(n, n - 1);
}

int getSmallestPrimeHelper(int n, int helper)
{
	if (n == helper)
		return helper;
	if (isPrime(helper) && (n % helper) == 0)
		return helper;
	return getSmallestPrimeHelper(n, helper + 1);
}

int getSmallestPrime(int n)
{
	return getSmallestPrimeHelper(n, 2);
}

void printPrimes(int n)
{
	if (isPrime(n))
	{
		printf("%d\n", n);
		return;
	}
	int smallestPrime = getSmallestPrime(n);
	printf("%d ", smallestPrime);
	printPrimes(n / smallestPrime);
}

int isInteresting(int n)
{
	if (n <= 99)
	{
		if (n % 2 == 0)
			return 0;
		return 1;
	}
	int prev = isInteresting(n / 100);
	if (prev && (n % 10) % 2 == 1)
		return 1;
	return 0;
}