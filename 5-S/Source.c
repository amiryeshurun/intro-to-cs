#include <stdio.h>
#include "array.h"
#include <math.h>

int getOddNumberIdx(int number);

void main()
{
	/*int arr[10];
	scanArray(arr, 10);
	int newLength;
	newLength = removeArray(arr, 10, 3);
	printf("The new length is %d\n", newLength);
	int i;
	for (i = 0; i < newLength; i++)
		printf("%d ", arr[i]);*/

	int mat[ROWS][COLS];
	scanMatrix(mat, ROWS, COLS);
	printf("Trace: %d\n", trace(mat, ROWS));
}


int getOddNumberIdx(int number)
{
	int idx = 0, numberDigits = 1, result = 0, currentDigit;
	do
	{
		currentDigit = number % 10;
		if (idx % 2 == 1)
		{
			result = result + currentDigit * pow(10, numberDigits - 1);
			numberDigits++;
		}
		idx++;
		number /= 10;
	} while (number != 0);
	return result;
}