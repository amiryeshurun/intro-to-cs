#include <stdio.h>
#include "m7.h"

int MultEven(int a[], int size)
{
	if (size == 1)
	{
		if (a[0] % 2 == 0)
			return a[0];
		else
			return 0;
	}
	int res = MultEven(a + 1, size - 1);
	if (res == 0)
	{
		if (a[0] % 2 == 0)
			return a[0];
		else
			return 0;
	}
	else
	{
		if (a[0] % 2 == 0)
			return a[0] * res;
		else
			return res;
	}
}