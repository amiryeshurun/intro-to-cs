#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alloc.h"

void swapInt(int* ptr1, int* ptr2)
{
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void swapAny(void* ptr1, void* ptr2, int size)
{
	char buffer[20];
	memcpy(buffer, ptr1, size);
	memcpy(ptr1, ptr2, size);
	memcpy(ptr2, buffer, size);
}

char** scanStrings(int* size)
{
	// shalom
	// my
	// name
	// is amir
	// colman
	// exit

	char** strings = NULL;
	char buffer[500];

	*size = 0;
	while (1)
	{
		gets_s(buffer, 499);
		if (strcmp(buffer, "exit") == 0)
			break;
		strings = (char**)realloc(strings, (*size + 1) * sizeof(char*));
		if (strings == NULL)
		{
			printf("Could not allocate space for array of pointers\n");
			return NULL;
		}
		strings[*size] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
		if (strings[*size] == NULL)
		{
			printf("Could not allocate space for a string\n");
			return NULL;
		}
		strcpy(strings[*size], buffer);
		(*size)++;
	}

	return strings;
}

int* analyzeArray(int* arr, int size, int* count)
{
	int i, idx = 0, maxLength = 1, j, currentLength;
	int* newArr;
	//  { -4, 2, 1, 0, 3, 4, 5, 6, 7, 1 }

	for (i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			j = i;
			currentLength = 1;
			while (j < size - 1 && arr[j] < arr[j + 1])
			{
				j++;
				currentLength++;
			}
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
				idx = i;
			}
		}
	}
	// idx = index of first variable
	// maxLength = the length

	newArr = (int*)malloc(maxLength * sizeof(int));
	if (newArr == NULL)
	{
		printf("Could not allocate space for the result\n");
		return NULL;
	}
	for (i = 0; i < maxLength; i++)
		newArr[i] = arr[idx + i];
	*count = maxLength;

	return newArr;
}