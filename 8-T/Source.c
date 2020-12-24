#include "pointers.h"
#include <stdio.h>

void main()
{
	/*int arr[10], poly[10];
	scanArray(arr, 10);
	findPoly(arr, 10, poly);*/

	//int x = 5, y = 3;
	//int* px = &x;
	//int* py = &y;

	////*px = *py;
	////px = py;
	////*px = py;
	////px = *py;

	int arr[10];
	scanArray(arr, 10);
	int* addresses[10];
	findFours(arr, 10, addresses);

}