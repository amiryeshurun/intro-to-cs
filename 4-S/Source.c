#include <stdio.h>
#include "functions.h"

void main()
{
	int x, y;
	printf("Please enter two numbers: ");
	scanf_s("%d%d", &x, &y);
	printf("Result: %d\n", contains(x, y));
}

// 1245
// 24