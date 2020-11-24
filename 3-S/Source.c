#include <stdio.h>

void main_1()
{
	int number, min;
	printf("Please enter a positive number, or -1 to exit: ");
	scanf_s("%d", &number);
	min = number;
	if (min <= -1)
		return;
	while (number != -1)
	{
		printf("Please enter a positive number, or -1 to exit: ");
		scanf_s("%d", &number);
		if (number > -1 && number < min)
			min = number;
	}
	printf("The minimum number is: %d\n", min);
}

void main_2()
{
	int idx, x = 1, y = 1, result = 1, i;
	printf("Please enter an index: ");
	scanf_s("%d", &idx);
	for (i = 3; i <= idx; i++)
	{
		result = x + y;
		x = y;
		y = result;
	}
	printf("The result is: %d\n", result);
}

void main_3()
{
	int number, i, flag = 1;
	printf("Please enter a number: ");
	scanf_s("%d", &number);

	for (i = 2; i < number - 1; i++)
	{
		if (number % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		printf("The number is prime\n");
	else
		printf("The number is not prime\n");

}


void main_4()
{
	int number, i, j;
	printf("Please enter a positive number: ");
	scanf_s("%d", &number);

	for (i = 0; i < number; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void main_5()
{
	int number, i;
	printf("Please enter a positive number, -1 to exit: ");
	scanf_s("%d", &number);
	// 10
	// 2 4 6 8
	// 13
	// 2 4 6 8 10 12
	while (number != -1)
	{
		for (i = 2; i < number; i += 2)
		{
			printf("%d ", i);
		}
		printf("\n");

		printf("Please enter a positive number, -1 to exit: ");
		scanf_s("%d", &number);
	}
}

void main_6()
{
	int number = 70, guess, i = 0;

	do
	{
		printf("Enter a number: ");
		scanf_s("%d", &guess);
		if (guess > number)
			printf("Enter a smaller number\n");
		else if (guess < number)
			printf("Enter a bigger number\n");
		else
			printf("You won!\n");
	} while (guess != number && i++ < 10);
	if (i == 11)
		printf("You lost, the corrent number is: %d\n", number);
}

void main()
{
	// 3
	// *
	// **
	// ***
	// **
	// *
	int number, i, j;
	printf("Please enter a positive number: ");
	scanf_s("%d", &number);

	for (i = 0; i < number; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = number - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

