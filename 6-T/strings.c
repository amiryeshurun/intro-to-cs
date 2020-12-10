#include "strings.h"
#include <string.h>

int compareStrings(char str1[], char str2[])
{
	// cairadf <---- str1 7
	// cmirad <---- str2 6
	int size1 = strlen(str1), size2 = strlen(str2), i;
	for (i = 0; i < size1 && i < size2; i++)
	{
		if (str1[i] > str2[i])
			return -1;
		else if (str1[i] < str2[i])
			return 1;
	}
	// הלולאה מסתיימת אך ורק אם היה שיוויון בתווים הראשונים של המחרוזות
	if (size1 == size2)
		return 0;
	else if (size1 > size2)
		return -1;
	else
		return 1;
}

int stringToInt(char str[])
{
	int size = strlen(str), i, result = 0;
	for (i = 0; i < size; i++)
		result = result * 10 + (str[i] - '0');
	return result;
}