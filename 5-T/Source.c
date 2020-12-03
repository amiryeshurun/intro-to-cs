#include <stdio.h>
#include "arrays.h"

// ...

#define SIZE 5

void main()
{
	//int arr[SIZE], primes[SIZE], countPrimes;
	//
	//scanArray(arr, SIZE);

	/*int count = countNumber(arr, SIZE, 2);
	printf("%d appeared %d times\n", 2, count);*/

	/*countPrimes = filterPrimes(arr, SIZE, primes);
	int i;
	printf("The number of primes is %d: ", countPrimes);
	for (i = 0; i < countPrimes; i++)
		printf("%d ", primes[i]);*/

	int matrix[ROW][COL];

	scanMatrix(matrix, ROW, COL);
	if (sumRows(matrix, ROW, COL))
	{
		printf("The sum is equal accross all rows\n");
	}
	else
	{
		printf("The sum is not equal accross all rows\n");
	}
}

// ...