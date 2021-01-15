#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include "recursion.h"

void main()
{
	/*Airplane* a = allocateAirplane("EO-1", 2);
	Airline* airline = allocateAirline("ElAl");
	addNewAirplane(airline, a);
	puts(airline->airplanes[0]->id);*/

	int arr[] = { 1,4,5,7,8,9 };

	printf("Value: %d\n", fib(2));
	printf("Number of digits: %d\n", numberOfDigits(145));
	printf("The sum of the digits is %d\n", sumDigits(145));
	printf("Sum of array: %d\n", sumArr(arr, 6));
	printLine(9);
}