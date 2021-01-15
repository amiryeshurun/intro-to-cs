#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "recursion.h"

// כתבו פונקציה המדפיסה משולש בהתאם למספר שהיא תקבל
// כתבו פונקציה המדפיסה את אותו המשולש, אבל הפוך
// כתבו פונקציה הבודקת האם מספר מתחלק בשלוש (עפי סימן ההתחלקות בשלוש - סכום הספרות מתחלק ב-3)

int fib(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int numberOfDigits(int n)
{
	if (n <= 9)
		return 1;
	return numberOfDigits(n / 10) + 1;
}

int sumDigits(int n)
{
	if (n <= 9)
		return n;
	return sumDigits(n / 10) + n % 10;
}

int sumArr(int* arr, int length)
{
	if (length == 1)
		return (*arr);
	return sumArr(arr + 1, length - 1) + (*arr);
}

void printLine(int n)
{
	if (n == 0)
	{
		printf("\n");
		return;
	}
	printf("*");
	printLine(n - 1);
}