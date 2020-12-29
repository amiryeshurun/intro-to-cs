#include "pointers.h"
#include <stdio.h>

int findNumbers(char* str, int* numbers)
{
	int currentNum = 0, counter = 0;

	while (*str != '\0')
	{
		// if a digit was found
		if (*str >= '0' && *str <= '9')
		{
			// scan all the digits
			while (*str >= '0' && *str <= '9')
			{
				// get the value of the current digit ('7' - '0' = 7)
				currentNum = currentNum * 10 + (*str - '0');
				str++;
			}
			// save the current number in the array
			*numbers = currentNum;
			numbers++;
			counter++;
			currentNum = 0;
			if (*str == '\0')
				break;
		}
		str++;
	}

	return counter;
}

int findFours(int* arr, int size, int** addresses)
{
	// 10 4 5 6 4 4
	//      ^
	int counter = 0;
	
	while (size--)
	{
		if (*arr == 4)
		{
			*addresses = arr;
			addresses++;
			counter++;
		}
		arr++;
	}

	return counter;
	// size = 3
	// while(3), size = 2
	// while(2), size = 1
	// while(1), size = 0
	// while(0), size = -1
}