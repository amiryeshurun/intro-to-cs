#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

Airplane* allocateAirplane(const char* id, int type)
{
	Airplane* airplane;

	airplane = (Airplane*)malloc(sizeof(Airplane));
	if (airplane == NULL)
	{
		printf("Could not allocate the airplane\n");
		return NULL;
	}
	airplane->id = (char*)malloc((strlen(id) + 1) * sizeof(char));
	if (airplane->id == NULL)
	{
		printf("Could not allocate space for the id field\n");
		free(airplane);
		return NULL;
	}
	strcpy(airplane->id, id);
	// airplane->id = strdup(id);
	airplane->type = type;
	return airplane;
}

Airline* allocateAirline(const char* name)
{
	Airline* airline;

	airline = (Airline*)malloc(sizeof(Airline));
	if (airline == NULL)
	{
		printf("Could not allocate space for an airline\n");
		return NULL;
	}
	airline->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
	if (airline->name == NULL)
	{
		printf("Could not allocate space for the name of the airline\n");
		free(airline);
		return NULL;
	}
	strcpy(airline->name, name);
	airline->numberOfAirplanes = 0;
	airline->airplanes = NULL;

	return airline;
}

void addNewAirplane(Airline* airline, Airplane* airplane)
{
	Airplane** temp;
	
	temp = (Airplane**)realloc(airline->airplanes,
		(airline->numberOfAirplanes + 1) * sizeof(Airplane*));
	if (temp == NULL)
	{
		printf("Could not allocate space for a new airplane in the array\n");
		return;
	}
	airline->airplanes = temp;
	airline->airplanes[airline->numberOfAirplanes] = allocateAirplane(airplane->id, airplane->type);
	airline->numberOfAirplanes++;
}