#include "exam.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

double calcDistance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

Apartment* cloneAp(Apartment* ap)
{
	Apartment* newAp = (Apartment*)malloc(sizeof(Apartment));
	// check if allocation failed
	if (newAp == NULL)
		return NULL;

	memcpy(newAp, ap, sizeof(Apartment));
	// *newAp = *ap;

	return newAp;
}

int addApartmentToArray(Apartment*** arr, int* size, Apartment* ap)
{
	Apartment** tmp = (Apartment**)realloc(*arr, (*size + 1) * sizeof(Apartment*));
	if (tmp == NULL)
		return 0;
	*arr = tmp;
	(*arr)[*size] = ap;
	(*size)++;
	return 1;
}

ApartmentOwner* scanOwner()
{
	char buffer[100];
	ApartmentOwner* ao = (ApartmentOwner*)malloc(sizeof(ApartmentOwner));
	
	getchar();
	printf("Name: ");
	gets_s(buffer, 99);
	ao->name = _strdup(buffer);
	
	printf("id: ");
	scanf("%d", &ao->id);

	ao->numApartments = 0;
	ao->apartments = NULL;

	return ao;
}

Apartment* scanAp()
{
	Apartment* ap = (Apartment*)malloc(sizeof(Apartment));

	printf("X: ");
	scanf("%lf", &ap->location.xPos);
	printf("Y: ");
	scanf("%lf", &ap->location.yPos);
	printf("Price: ");
	scanf("%f", &ap->price);
	printf("Num rooms: ");
	scanf("%d", &ap->numRooms);

	return ap;
}

void AddOwner(Airbnb* airbnb, ApartmentOwner* o)
{
	airbnb->owners = realloc(airbnb->owners, sizeof(ApartmentOwner*) * (airbnb->numOfOwners + 1));
	airbnb->owners[airbnb->numOfOwners++] = o;
}

Apartment* addAppartment(Airbnb* db, int id, Apartment ap)
{
	int i;
	Apartment* newAp = cloneAp(&ap);
	if (newAp == NULL)
		return NULL;

	for (i = 0; i < db->numOfOwners; i++)
	{
		if (db->owners[i]->id == id)
		{
			if (addApartmentToArray(&db->owners[i]->apartments, &db->owners[i]->numApartments, newAp) == 0)
				return NULL;
			break;
		}
	}

	return newAp;
}

Apartment** searchApartment(Airbnb* db, GpsLocation location, int radius, float maxPrice, int rooms, int *numRelevantApartments)
{
	Apartment** aps = NULL;
	Apartment* a;
	int i, j;
	*numRelevantApartments = 0;

	for (i = 0; i < db->numOfOwners; i++)
	{
		for (j = 0; j < db->owners[i]->numApartments; j++)
		{
			a = db->owners[i]->apartments[j];
			if(
				calcDistance(location.xPos, location.yPos, a->location.xPos, a->location.yPos) <= radius &&
				a->numRooms == rooms &&
				a->price <= maxPrice
				)
			{
				if (addApartmentToArray(&aps, numRelevantApartments, a) == 0)
					return NULL;
			}
		}
	}

	return aps;
}

int checkFacilities(Apartment* ap, int service)
{
	return -1;
}
