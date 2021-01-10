#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

void main()
{
	BetterCourse* c = allocateBetterCourse("Into to CS", 2);
	freeBetterCourse(c);
}