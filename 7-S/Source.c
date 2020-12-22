#include <stdio.h>
#include "pointers.h"

void main()
{
	char str[100];
	gets_s(str, 99);
	char* addresses[100];
	getCharAddresses(str, 'c', addresses);
}
