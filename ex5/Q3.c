#include "exam.h"

int areClose(long int n1, long int n2)
{
	/******** DON'T CHANGE ********/
	fx1(); // do not change!!!
	/******************************/
	
	if (n1 <= 0 || n2 <= 0)
		return 0;
	else if (n1 >= 1 && n1 <= 9 && n2 >= 1 && n2 <= 9)
	{
		int diff = n1 - n2;
		if (diff < 0)
			diff *= -1;
		if (diff <= 1)
			return 1;
		return 0;
	}

	int diff = (n1 % 10) - (n2 % 10);
	if (diff < 0)
		diff *= -1;

	if (diff > 1)
		return 0;

	return areClose(n1 / 10, n2 / 10);
}


