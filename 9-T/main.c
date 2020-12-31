#include <stdio.h>
#include "alloc.h"
#include <stdlib.h>

void main()
{
	/*int* arr = allocateArray(5), i;
	for (i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
	free(arr);*/

	//char** strings;
	//int i;
	//strings = scanStrings(3);
	//for (i = 0; i < 3; i++)
	//	puts(strings[i]);

	//// free the strings
	//for (i = 0; i < 3; i++)
	//	free(strings[i]);
	//free(strings);

	int size, i;
	char str[] = "Hello 200 today is30 my15 name is 20";
	int* arr = findNumbers(str, &size);
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	free(arr);
}

