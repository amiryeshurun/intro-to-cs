#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recursion.h"

typedef void (*fptr)(char*);
typedef void (*fptr1)();

void main()
{
	// printf("%d\n", isDividedBy(15, 2));

	/*int arr[] = { 9,1,2,4,2 };
	printf("%d\n", findLongestSubset(arr, 5));*/

	char str[200] = "HI HELLO";
	// appendAbc(str);
	fptr appendABC;
	appendABC = &appendAbc;
	appendABC(str);
	puts(str);
}