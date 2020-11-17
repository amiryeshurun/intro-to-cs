#include <stdio.h>

void main_1()
{
	int num;
	printf("Pelase enter a number: ");
	scanf_s("%d", &num);
	printf("Number: %d\n", ++num);
	printf("Number: %d\n", num);
}

void main_2()
{
	// = : השמה
	// 0 - FALSE
	// 1,2,3,4,5,... - TRUE
	int y = 2, x = 3;
	int z = (x == y) || -2;
	printf("The value of Z is: %d\n", z);
}

void main()
{
	printf("Please enter two numbers and an operator:\n");
	int num1, num2;
	char op;
	float result;
	scanf_s("%d", &num1);
	getchar();
	scanf_s("%c", &op);
	scanf_s("%d", &num2);

	if (op == '+')
		result = num1 + num2;
	else if (op == '-')
		result = num1 - num2;
	else if (op == '/')
		result = (float)num1 / num2;
	else if (op == '*')
		result = num1 * num2;
	printf("The result is: %.2f\n", result);

	// <= 3 ----> "The result is smaller than 3"
	// 4 <= result <= 8 -----> "The result is between 4 and 8"
	// >=9 -----> "The result is bigger than 9"
	if(4 <= result && result <= 8)
		printf("The result is between 4 and 8\n");
	else if (result <= 3)
		printf("The result is smaller than 3\n");
	else
		printf("The result is bigger than 9\n");
}
