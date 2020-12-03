#include "arrays.h"
#include <stdio.h>
#include "utils.h"


void scanArray(int arr[], int length)
{
	int i;
	printf("Please enter %d numbers: ", length);
	for (i = 0; i < length; i++)
		scanf_s("%d", &arr[i]);
}

int countNumber(int arr[], int length, int number)
{
	int i, count = 0;
	for (i = 0; i < length; i++)
		if (arr[i] == number)
			count++;
	return count;
}

int filterPrimes(int arr[], int length, int result[])
{
	int i, count = 0;
	for (i = 0; i < length; i++)
	{
		if (isPrime(arr[i]))
		{
			result[count] = arr[i];
			count++;
		}
	}
	return count;
}

void scanMatrix(int mat[][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &(mat[i][j]));
		}
	}
}

int sumRows(int mat[][COL], int row, int col)
{
	int i, j, sum = 0, currentRowSum;
	for (j = 0; j < col; j++)
		sum += mat[0][j];

	for (i = 1; i < row; i++)
	{
		currentRowSum = 0;
		for (j = 0; j < col; j++)
			currentRowSum += mat[i][j];
		if (currentRowSum != sum)
			return 0;
	}

	return 1;
}