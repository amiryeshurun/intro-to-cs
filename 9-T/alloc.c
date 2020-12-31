#include <stdio.h>
#include "alloc.h"
#include <stdlib.h>
#include <string.h>

int* allocateArray(int size)
{
	int* arr, * backup;

	arr = (int*)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		printf("Could not allocate array\n");
		return NULL;
	}
	backup = arr;
	while (size--)
	{
		scanf("%d", arr);
		arr++;
	}
	// size = 3
	// while(3), size = 2
	// while(2), size = 1
	// while(1), size = 0
	// while(0), size = -1
	return backup;
}


char** scanStrings(int size)
{
	char** strings;
	char buffer[500];
	int i;

	strings = (char**)malloc(size * sizeof(char*));
	if (strings == NULL)
	{
		printf("Could not allocate array of pointers\n");
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		gets_s(buffer, 499);
		strings[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
		if (strings[i] == NULL)
		{
			printf("Could not allocate string\n");
			return NULL;
		}
		// buffer = "amir\0"
		// strings[i] = "amir\0"
		strcpy(strings[i], buffer);
		strings[i][strlen(buffer)] = '\0';
	}

	return strings;
}

int* findNumbers(char* str, int* size)
{
	// Hello 200 today is30 my15 name is 20\0
	// 200 30 15
	int* arr = NULL, counter = 0, currentNum = 0;

	while (*str != '\0')
	{
		// if a digit was found
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				currentNum = currentNum * 10 + (*str - '0');
				str++;
			}
			// currentNum = 213
			counter++;
			arr = (int*)realloc(arr, counter * sizeof(int));
			if (arr == NULL)
			{
				printf("Could not allocate space for a new number\n");
				return NULL;
			}
			arr[counter - 1] = currentNum;
			currentNum = 0;
		}
		str++;
	}

	*size = counter;
	return arr;
}