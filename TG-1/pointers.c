#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pointers.h"

char** scanStrings(int count)
{
	char** strings;
	char buffer[500];
	int i, size;

	strings = (char**)malloc(count * sizeof(char*));
	if (strings == NULL)
	{
		printf("Could not allocate space for array of pointers\n");
		return NULL;
	}

	for (i = 0; i < count; i++)
	{
		gets_s(buffer, 499);
		size = strlen(buffer);
		strings[i] = (char*)malloc((size + 1) * sizeof(char)); // 700, 2000
		if (strings[i] == NULL)
		{
			printf("Could not allocate space for array of chars\n");
			return NULL;
		}
		strcpy(strings[i], buffer);
		strings[i][size] = '\0';
	}

	return strings;
}

char** getSuffix(char* str)
{
	// str = colman\0
	int size = strlen(str), currentLength = 1, i = 0;
	char* end = str + size - 1;
	char** suffix;

	suffix = (char**)malloc(size * sizeof(char*));
	if (suffix == NULL)
	{
		printf("Could not allocate space for array of pointers\n");
		return NULL;
	}

	while (1)
	{
		suffix[i] = (char*)malloc((currentLength + 1) * sizeof(char));
		if (suffix[i] == NULL)
		{
			printf("Could not allocate space for array of chars\n");
			return NULL;
		}
		strcpy(suffix[i], end);
		i++;
		currentLength++;
		if (str == end)
			break;
		end--;
	}

	return suffix;
}