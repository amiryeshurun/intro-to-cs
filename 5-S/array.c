#include "array.h"
#include <stdio.h>

void scanArray(int arr[], int length)
{
	int i;
	printf("Please enter %d numbers: ", length);
	for (i = 0; i < length; i++)
		scanf_s("%d", &(arr[i]));
}

int removeArray(int arr[], int length, int number)
{
	int i, j;
	for (i = 0; i < length; i++)
	{
		if (arr[i] == number)
		{
			for (j = i + 1; j < length; j++)
			{
				arr[j - 1] = arr[j];
			}
			i--;
			length--;
		}
	}
	return length;
}

void scanMatrix(int mat[][COLS], int rows, int cols)
{
	int i, j;
	printf("Please enter %d numbers:\n", rows * cols);
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf_s("%d", &(mat[i][j]));
		}
	}
}

int trace(int mat[][COLS], int n)
{
	int i, result = 0;
	for (i = 0; i < n; i++)
		result += mat[i][i];
	return result;
}