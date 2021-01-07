#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

void scanMovie(Movie* movie)
{
	char buffer[100];

	printf("Please enter a movie id: ");
	scanf("%d", &(movie->id));
	
	printf("Please enter the length: ");
	scanf("%d", &(movie->length));
	getchar();

	printf("Please enter the name of the movie: ");
	gets_s(buffer, 99);
	movie->name = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
	if (movie->name == NULL)
	{
		printf("Could not allocate space for the name of the movie\n");
		return;
	}
	strcpy(movie->name, buffer);
	movie->name[strlen(buffer)] = '\0';
}

void scanCinema(Cinema* cinema)
{
	char buffer[100];
	int i;

	printf("Please enter the address of the cinema: ");
	gets_s(buffer, 99);
	cinema->address = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
	if (cinema->address == NULL)
	{
		printf("Could not allocate space for the address of the cinema\n");
		return;
	}
	strcpy(cinema->address, buffer);

	printf("Please enter the number of movies in the cinema: ");
	scanf("%d", &(cinema->numberOfMovies));
	cinema->movies = (Movie*)malloc(cinema->numberOfMovies * sizeof(Movie));
	if (cinema->movies == NULL)
	{
		printf("Could not allocate space for array of movies\n");
		return;
	}
	for (i = 0; i < cinema->numberOfMovies; i++)
	{
		printf("==============\n");
		scanMovie(&(cinema->movies[i]));
		printf("==============\n");
	}
}

void scanCinemaCity(CinemaCity* cinemaCity)
{
	int i;

	printf("Please enter the number of cinemas: ");
	scanf("%d", &(cinemaCity->numberOfCinemas));
	getchar();

	cinemaCity->cinemas = (Cinema*)malloc(cinemaCity->numberOfCinemas * sizeof(Cinema));
	if (cinemaCity->cinemas == NULL)
	{
		printf("Could not allocate space for array of cinemas\n");
		return;
	}

	for (i = 0; i < cinemaCity->numberOfCinemas; i++)
	{
		printf("Cinema #%d\n", i + 1);
		scanCinema(&(cinemaCity->cinemas[i]));
	}
}

void freeMovie(Movie* movie)
{
	free(movie->name);
}

void freeCinema(Cinema* cinema)
{
	int i;

	free(cinema->address);
	for (i = 0; i < cinema->numberOfMovies; i++)
		freeMovie(&(cinema->movies[i]));
	free(cinema->movies);
}

void freeCinemaCity(CinemaCity* cinemaCity)
{
	int i;

	for (i = 0; i < cinemaCity->numberOfCinemas; i++)
		freeCinema(&(cinemaCity->cinemas[i]));
	free(cinemaCity->cinemas);
}

// ==================

Student** scanStudents(int size)
{
	Student** students;
	int i;

	students = (Student**)malloc(size * sizeof(Student*));

	for (i = 0; i < size; i++)
	{
		students[i] = (Student*)malloc(sizeof(Student));
		scanf("%d", &(students[i]->id));
		scanf("%d", &(students[i]->age));
	}
	
	return students;
}