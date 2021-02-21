#include <stdlib.h>
#include <string.h>
#include "exam.h"

int charExists(char* str, char ch)
{
	int i, size = strlen(str);

	for (i = 0; i < size; i++)
		if (str[i] == ch)
			return 1;

	return 0;
}

void create_substitutor(char *keyword, char *subst)
{
	char ch, tmp[2];

	tmp[1] = '\0';

	strcpy(subst, keyword);

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (!charExists(keyword, ch))
		{
			tmp[0] = ch;
			strcat(subst, tmp);
		}
	}
}