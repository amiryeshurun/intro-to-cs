#include <stdio.h>

void main_1()
{
	int x, y;
	printf("Please type two numbers: ");
	scanf_s("%d,%d", &x, &y);
	float avg = (float)(x + y) / 2;
	printf("avg: %f\n", avg);
}

void main_2()
{
	// 927
	int number, number2;
	scanf_s("%d", &number);
	number2 = number;
	int firstDigit = number % 10;
	number /= 10; // ===> number = number / 10;
	int secondDigit = number % 10;
	number /= 10; // ===> number = number / 10;
	int thirdDigit = number;
	printf("%d\n%d\n%d\n", firstDigit, secondDigit, thirdDigit);
	// secondDigit = (number / 10) % 10;
	// thirdDigit = (number / 100);

	printf("%d\n%d\n%d\n", number2 % 10, (number2 / 10) % 10, number2 / 100);
}

void main_3()
{
	int number;
	printf("Please enter a number: ");
	scanf_s("%d", &number);
	int result = (++number) + 8;
	printf("Number: %d, result: %d\n", number, result);
}

void main()
{
	char tav;
	scanf_s("%c", &tav);
	printf("The char is: %d\n", tav);
}