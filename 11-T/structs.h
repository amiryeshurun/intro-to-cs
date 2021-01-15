#pragma once

typedef struct
{
	char* id;
	int type;
} Airplane;

typedef struct
{
	char* name;
	int numberOfAirplanes;
	Airplane** airplanes;
} Airline;

Airplane* allocateAirplane(const char* id, int type);

Airline* allocateAirline(const char* name);

void addNewAirplane(Airline* airline, Airplane* airplane);