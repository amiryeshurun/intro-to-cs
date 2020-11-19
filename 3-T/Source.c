#include <stdio.h>

void main_1()
{
	float number;
	scanf_s("%f", &number);
	if ((int)number == number)
		printf("The number is: %d\n", (int)number);
	else
		printf("The number is: %.3f\n", number);
}

void main_2()
{
	int number, sum = 0;
	printf("Please enter a positive number: ");
	scanf_s("%d", &number);
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}
	printf("The sum is: %d\n", sum);
}

void main_3()
{
	int number = 70, i, guess;

	for (i = 0; i < 10; i++)
	{
		printf("Please enter a number between 0 and 100: ");
		scanf_s("%d", &guess);
		if (guess > number)
			printf("%d is higher\n", guess);
		else if (guess < number)
			printf("%d is smaller\n", guess);
		else
		{
			printf("%d is correct!\n", guess);
			break;
		}
	}
	// break
	if (i == 10)
		printf("You lost, the correct value is: %d!\n", number);
}

void main_4()
{
	int num1, num2, i; // num1 ^ num2
	unsigned long long result = 1;
	printf("Please enter two positive numbers: ");
	scanf_s("%d%d", &num1, &num2);
	// 2 ^ 5 ::: 2 * 2 * 2 * 2 * 2
	for (i = 0; i < 5; i++)
		result = result * num1; // result = result * num1
	printf("The result is: %llu\n", result);
	/*
		1 * num1 = num1
		num1 * num1 = (num1)^2
		(num1)^2 * num1 = (num1)^3
		(num1)^3 * num1 = (num1)^4
	*/
}

void main_5()
{
	// 5 <------
	// 1 2 3 4 5
	// 20 <-------
	// 1 2 3 4 5 .... 18 19 20
	// 30 <-------
	// 1 2 3 4 5 6 ...... 28 29 30

	int i, j, number;
	for (i = 0; i < 10; i++)
	{
		printf("%d: Please enter a positive number: ", i + 1);
		scanf_s("%d", &number);
		for (j = 1; j <= number; j++)
			printf("%d ", j);
		printf("\n");
	}
}

void main_6()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}

void main()
{
	int number;
	printf("Please enter a number between 1-6: ");
	scanf_s("%d", &number);
	switch (number)
	{
		case 1:
		case 3:
		case 5:
			printf("The number is odd\n");
			break;
		case 2:
		case 4:
		case 6:
			printf("The number is even\n");
			break;
		default:
			printf("You entered a number above 6\n");
	}
}