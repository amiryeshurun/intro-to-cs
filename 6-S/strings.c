#include "strings.h"
#include <stdio.h>
#include <string.h>

// mavo\0
int stringLength(char str[])
{
	int i = 0;
	while (str[i++] != '\0');
	return i - 1;
}

// abcdefg <---- str1
// cde     <---- str2
int stringContains(char str1[], char str2[])
{
	int size1 = strlen(str1), size2 = strlen(str2), i, j, flag;
	if (size2 > size1)
		return 0;
	for (i = 0; i <= size1 - size2; i++)
	{
		flag = 1;
		for (j = 0; j < size2; j++)
		{
			if (str1[i + j] != str2[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			return 1;
	}
	return 0;
}

int split(char str[], char words[MAX_WORDS][MAX_LEN])
{
	// Intro to CS\0
	int size = strlen(str), i, j, k, start = 0, end = 0, count = 0;

	for (i = 0; i <= size;)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			k = 0; end--;

			// copy str from index "start" to index "end"
			for (j = start; j <= end; j++, k++)
				words[count][k] = str[j];
			words[count][k] = '\0';

			count++;

			if (str[i] != '\0')
			{
				start = end + 2;
				end = start;
				i = start;
			}
			/// I added this condition after the end of the lesson, in order to stop the loop
			/// when '\0' is detected
			else
				break;
		}
		else // str[i] != ' '
		{
			end++;
			i++;
		}
	}

	return count;
}