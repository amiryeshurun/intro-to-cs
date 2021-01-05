#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alloc.h"

void main()
{
	/*float x = 2.2, y = 3.3;

	printf("x: %lf, y: %lf\n", x, y);
	swapAny(&x, &y, sizeof(char));
	printf("x: %lf, y: %lf\n", x, y);*/

	/*int size, i;
	char** strings = scanStrings(&size);

	for (i = 0; i < size; i++)
		puts(strings[i]);

	for (i = 0; i < size; i++)
		free(strings[i]);
	free(strings);*/

	/*int arr[] = { -4, 2, 1, 0, 3, 4, 5, 6, 7, 1 };
	int count, i;
	int* result = analyzeArray(arr, 10, &count);

	for (i = 0; i < count; i++)
		printf("%d ", result[i]);

	free(result);*/

	int arr[] = { -4, 2, 1, 0, 3, 4, 5, 6, 7, 1 };
	int* ptr = arr + 2;

	(*ptr)++;
	int x = *(ptr++);
}