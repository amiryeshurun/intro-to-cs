#pragma once

/*
	int x = 2, y = 3;
	swap(&x, &y);
	// x = 3, y = 2
*/

void swap(int* x, int* y);

int stringLength(char* str);

//
// 1 3 13 5 9 2 8 12 12 6
// 10
// <842398749238> <8947237498> <847238437839> <904872303> ....
// 3 13 5 2
// 4
// 

int copyPrimes(int* arr, int size, int* primes, int* countPrimes);

void scanArray(int* arr, int size);