#include "pointers.h"
#include <stdio.h>

int isPrime(int number)
{
	int i;
	if (number == 1)
		return 0;
	for (i = 2; i < number; i++)
		if (number % i == 0)
			return 0;
	return 1;
}

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int stringLength(char* str)
{
	// amir\0
	/*int i = 0;
	while (str[i] != '\0')
		i++;
	return i;*/
	
	int size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return size;
}

int copyPrimes(int* arr, int size, int* primes, int* countPrimes)
{
	int i;

	*countPrimes = 0;
	for (i = 0; i < size; i++)
	{
		if (isPrime(arr[i]))
		{
			// Insert the current number to the primes array
			*primes = arr[i];
			primes++;
			(*countPrimes)++;
		}
	}

	if (*countPrimes == 0)
		return 0;
	return 1;
}

void scanArray(int* arr, int size)
{
	while (size--)
	{
		scanf_s("%d", arr);
		arr++;
	}
	// while(3)
	// while(2)
	// while(1)
	// while(0)
}