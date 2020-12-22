#include "pointers.h"
#include <stdio.h>

void scanArray(int* arr, int size)
{
	/*int i;
	for (i = 0; i < size; i++)
		scanf_s("%d", &(arr[i]));*/

	while (size--)
	{
		scanf_s("%d", arr);
		arr++;
	}
	// while(3), size = 2
	// while(2), size = 1
	// while(1), size = 0
	// while(0), size = -1
}

void bubbleSort(int* arr, int size)
{
	int i, j, tmp;
	
	/*for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}*/

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}

int getCharAddresses(char* str, char ch, char** addresses)
{
	// amir\0
	//     ^
	int count = 0;

	while (*str != '\0')
	{
		if (*str == ch)
		{
			*addresses = str;
			addresses++;
			count++;
		}
		str++;
	}

	return count;
}