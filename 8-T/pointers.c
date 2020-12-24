#include "pointers.h"
#include <stdio.h>

int isPoly(int number)
{
	int backup = number, result = 0;

	do
	{
		result = result * 10 + number % 10;
		number /= 10;
	} while (number);

	return result == backup;
}

void scanArray(int* arr, int size)
{
	/*int i;
	for (i = 0; i < size; i++)
		scanf_s("%d", &(arr[i]));*/

	while (size--)
	{
		scanf_s("%d", arr++);
	}
	// size = 3
	// while(3), size = 2
	// while(2), size = 1
	// while(1), size = 0
	// while(0), size = -1
}

int findPoly(int* arr, int size, int* poly)
{
	int count = 0;

	while (size--)
	{
		if (isPoly(*arr))
		{
			count++;
			// poly = arr; <---- incorrect
			*poly = *arr;
			poly++;
		}
		arr++;
	}

	return count;
}

int findFours(int* arr, int size, int** addresses)
{
	int count = 0;

	while (size--)
	{
		if (*arr == 4)
		{
			count++;
			// *addresses = &arr;
			*addresses = arr;
			addresses++;
		}
		arr++;
	}

	return count;
}
