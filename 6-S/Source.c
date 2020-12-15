#include <stdio.h>
#include "strings.h"

void main()
{
	char str1[] = "Intro to CS";
	char words[MAX_WORDS][MAX_LEN];
	split(str1, words);
}