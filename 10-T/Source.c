#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

void main()
{
	CinemaCity cc;
	scanCinemaCity(&cc);

	puts(cc.cinemas[0].movies[0].name);
	freeCinemaCity(&cc);
}