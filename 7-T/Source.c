#include <stdio.h>
#include "pointers.h"
#include <string.h>


void main()
{
	/*int x = 2, y = 3;
	swap(&x, &y);
	printf("%d %d\n", x, y);*/

	/*char str[200];
	gets_s(str, 199);
	printf("%d\n", stringLength(str));*/

	int arr[10], arr2[10];
	scanArray(arr, 10);
	int count = 46;
	int p = copyPrimes(arr, 10, arr2, &count);

}