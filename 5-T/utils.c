#include "utils.h"

int isPrime(int number)
{
	int i;
	for (i = 2; i < number; i++)
		if (number % i == 0)
			return 0;
	return 1;
}