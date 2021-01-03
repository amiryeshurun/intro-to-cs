#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pointers.h"

void main()
{
	/*int i;
	char** strings = scanStrings(5);
	for (i = 0; i < 5; i++)
		puts(strings[i]);*/

	int i;
	char** suffix = getSuffix("colman");
	for (i = 0; i < 6; i++)
		puts(suffix[i]);
}