#include "pointers.h"
#include <stdio.h>

void main()
{
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* parr = arr + 2;
	int** pparr = &parr;

	*parr = 10;
	*(parr + 3) = 12;
	*(parr + 5) = *(parr + 6);
	(*parr)++;
	parr++;
	*(parr++) = 102;
	*(++parr) = 111;
	**pparr = 20;*/

	/*char str[] = "My100 name 27 is amir 10";
	int arr[10];
	findNumbers(str, arr);*/

	int arr[] = { 10,5,4,2,4,4,7,4 };
	int* addresses[10];
	findFours(arr, 8, addresses);
}