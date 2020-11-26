#include <stdio.h>

// <RETURN_TYPE> FUNCTION_NAME (<PARAMETER_TYPE> PARAMETER_NAME)
// {
//		code;
// }

int increament(int number);
void printShalom();
int power(int x, int y);
int min2(int num1, int num2);
int min3(int num1, int num2, int num3);
int numberOfDigits(int number);
int indexOfDigit(int number, int digit);

void test();
void test2();

void main()
{
	test();
}

int increament(int number)
{
	number++;
	return number;
}

void printShalom()
{
	printf("Shalom\n");
}

int power(int x, int y)
{
	int result = 1, i;
	for (i = 0; i < y; i++)
		result *= x;
	return result;
}

int min2(int num1, int num2)
{
	if (num1 < num2)
		return num1;
	return num2;
}

int min3(int num1, int num2, int num3)
{
	// int firstMinimum = min2(num1, num2);
	// int secondMinimum = min2(min2(num1, num2), num3);
	// return secondMinimum;
	return min2(min2(num1, num2), num3);
}

int numberOfDigits(int number)
{
	int digits = 0;
	do
	{
		digits++;
		number /= 10;
	} while (number != 0);
	return digits;
}

int indexOfDigit(int number, int digit)
{
	int index = 1;
	do
	{
		if (number % 10 == digit)
			return index;
		number /= 10;
		index++;
	} while (number != 0);

	return -1;
}

void test()
{
	printf("Hello from test\n");
	test2();
}

void test2()
{
	printf("Hello from test2\n");
}