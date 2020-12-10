#include <stdio.h>
#include "strings.h"
#include <string.h>

void main()
{
	char str1[200];
	char str2[200];
	/*gets_s(str, 19);
	printf("%d\n", stringToInt(str));*/
	// printf("%d\n", compareStrings(str1, str2));

	gets_s(str1, 199);
	gets_s(str2, 199);
	//strcat_s(str1, 199, str2);
	//printf("%s\n", str1); // includes all white spaces, scanf does not include white spaces
	//puts(str1); // put string ---- printf("%s\n", str1);

	// strlen, strcmp, strcat, strcpy, gets, puts
	strcpy_s(str1, 199, str2);
	puts(str1);
}