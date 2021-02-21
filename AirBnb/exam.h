#ifndef EXAM_H_
#define EXAM_H_

#define N 4
#ifndef NULL
#define NULL 0
#endif

#define TEXT_SIZE 40

typedef struct
{
	double xPos;
	double yPos;
}GpsLocation;

typedef struct
{
	char address[TEXT_SIZE];
	GpsLocation location;
	float price;
	int numRooms;
	int size;
	int floor;
	char description[TEXT_SIZE];
	unsigned char facilities;
}Apartment;

typedef struct
{
	char* name;
	int id;
	int numApartments;
	Apartment** apartments;
}ApartmentOwner;

typedef struct
{
	int numOfOwners;
	ApartmentOwner** owners;
}Airbnb;

void ShiftMatrixByK(int mat[N][N], int k);
int longestPalindromeSubstring(char *str);
int SpecialSeries(int n);
Apartment* addAppartment(Airbnb* db, int id, Apartment ap);
Apartment** searchApartment(Airbnb* db, GpsLocation location, int radius, float maxPrice, int rooms, int *numRelevantApartments);
int checkFacilities(Apartment* ap, int service);

void fx1();
void fx2();


#endif